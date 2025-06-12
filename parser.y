%{
#include <stdio.h>
#include <stdlib.h>

// External reference to Flex
int yylex();
void yyerror(const char *s);
extern void print_symbol_table();
extern int line, column;
extern FILE *yyin;  // For file input
%}

/* Token Declarations */
%token IF ELSE WHILE THEN READ WRITE RETURN
%token INTEGER_KW FLOAT_KW VOID
%token EQ ASSIGN EQUALS LE GE LT GT NE PLUS MINUS MULT DIV
%token AND OR NOT
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMI COMMA DOT SCOPE COLON
%token CLASS FUNC IMPLEMENT ISA PRIVATE PUBLIC LOCAL ATTRIBUTE
%token ID INT FLOAT STRING ERROR

%left OR
%left AND
%left EQ NE
%left LT GT LE GE
%left PLUS MINUS
%left MULT DIV
%right NOT

%start program

%%

program:
    class_list
    | stmt_list
    ;

class_list:
    class_list class_decl
    | class_decl
    ;

class_decl:
    CLASS ID LBRACE member_list RBRACE
    | CLASS ID ISA ID LBRACE member_list RBRACE
    | CLASS ID ISA ID_list LBRACE member_list RBRACE
    ;

ID_list:
    ID_list COMMA ID
    | ID
    ;

member_list:
    member_list member
    | member
    ;

member:
    field_decl
    | method_decl
    | visibility field_decl
    | visibility method_decl
    ;

visibility:
    PUBLIC
    | PRIVATE
    ;

field_decl:
    type ID SEMI
    | type ID LBRACKET INT RBRACKET SEMI
    | type ID LBRACKET ID RBRACKET LBRACKET INT RBRACKET SEMI
    ;

method_decl:
    FUNC ID LPAREN param_list RPAREN COLON type LBRACE stmt_list RBRACE
    | FUNC ID LPAREN RPAREN COLON type LBRACE stmt_list RBRACE
    | FUNC ID LPAREN param_list RPAREN LBRACE stmt_list RBRACE
    | FUNC ID LPAREN RPAREN LBRACE stmt_list RBRACE
    ;

param_list:
    param_list COMMA param
    | param
    ;

param:
    type ID
    | type ID LBRACKET RBRACKET
    ;

stmt_list:
    stmt_list stmt
    | stmt
    ;

stmt:
    expr_stmt
    | if_stmt
    | while_stmt
    | io_stmt
    | decl_stmt
    | block_stmt
    | return_stmt
    | assignment_stmt
    ;

assignment_stmt:
    ID DOT ID EQUALS expr SEMI
    | ID LBRACKET expr RBRACKET EQUALS expr SEMI
    | ID LBRACKET expr RBRACKET LBRACKET expr RBRACKET EQUALS expr SEMI
    ;

return_stmt:
    RETURN expr SEMI
    | RETURN SEMI
    ;

block_stmt:
    LBRACE stmt_list RBRACE
    | LBRACE RBRACE
    ;

decl_stmt:
    type ID ASSIGN expr SEMI
    | type ID SEMI
    | LOCAL type ID ASSIGN expr SEMI
    | LOCAL type ID SEMI
    ;

type:
    INTEGER_KW
    | FLOAT_KW
    | VOID
    | ID
    ;

expr_stmt:
    ID ASSIGN expr SEMI
    | ID EQUALS expr SEMI
    ;

if_stmt:
    IF LPAREN expr RPAREN THEN stmt ELSE stmt
    | IF LPAREN expr RPAREN THEN stmt
    | IF LPAREN expr RPAREN stmt ELSE stmt
    | IF LPAREN expr RPAREN stmt
    ;

while_stmt:
    WHILE LPAREN expr RPAREN stmt
    ;

io_stmt:
    READ LPAREN ID RPAREN SEMI
    | READ LPAREN ID DOT ID RPAREN SEMI
    | READ LPAREN ID LBRACKET expr RBRACKET RPAREN SEMI
    | WRITE LPAREN expr RPAREN SEMI
    ;

expr:
    expr PLUS expr
    | expr MINUS expr
    | expr MULT expr
    | expr DIV expr
    | expr LT expr
    | expr GT expr
    | expr LE expr
    | expr GE expr
    | expr EQ expr
    | expr NE expr
    | expr AND expr
    | expr OR expr
    | NOT expr
    | LPAREN expr RPAREN
    | ID
    | ID DOT ID
    | ID LBRACKET expr RBRACKET
    | ID LBRACKET expr RBRACKET LBRACKET expr RBRACKET
    | ID LPAREN arg_list RPAREN
    | ID LPAREN RPAREN
    | ID DOT ID LPAREN arg_list RPAREN
    | ID DOT ID LPAREN RPAREN
    | ID SCOPE ID LPAREN arg_list RPAREN
    | ID SCOPE ID LPAREN RPAREN
    | INT
    | FLOAT
    | STRING
    ;

arg_list:
    arg_list COMMA expr
    | expr
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error at line %d, column %d: %s\n", line, column, s);
}

int main(int argc, char *argv[]) {
    FILE *input_file;
    
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }
    
    input_file = fopen(argv[1], "r");
    if (!input_file) {
        fprintf(stderr, "Error: Cannot open file '%s'\n", argv[1]);
        return 1;
    }
    
    // Set flex to read from file instead of stdin
    yyin = input_file;
    
    printf("Begin parsing file: %s\n", argv[1]);
    if (yyparse() == 0) {
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed.\n");
    }
    
    fclose(input_file);
    print_symbol_table();
    return 0;
}