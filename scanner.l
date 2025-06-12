%{
#include "parser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int line = 1, column = 1;

typedef struct {
    char* lexeme;
    char* token_type;
    int line_no;
    int column_no;
} Token;

Token symbol_table[1000];
int sym_index = 0;

void add_token(const char* lexeme, const char* type) {
    symbol_table[sym_index].lexeme = strdup(lexeme);
    symbol_table[sym_index].token_type = strdup(type);
    symbol_table[sym_index].line_no = line;
    symbol_table[sym_index].column_no = column;
    sym_index++;
    column += yyleng;  // Update column after adding token
}

void print_symbol_table() {
    int i;
    char location_str[20];
    printf("\n+---------------+---------------+---------------+\n");
    printf("| %-13s | %-13s | %-13s |\n", "Lexeme", "Token Type", "Location");
    printf("+---------------+---------------+---------------+\n");
    for (i = 0; i < sym_index; i++) {
        sprintf(location_str, "(%d, %d)", symbol_table[i].line_no, symbol_table[i].column_no);
        printf("| %-13s | %-13s | %-13s |\n",
               symbol_table[i].lexeme,
               symbol_table[i].token_type,
               location_str);
    }
    printf("+---------------+---------------+---------------+\n");
}
%}

%%

"//".*                            { /* Inline comment */ column += yyleng; }
"/*"([^*]|\*+[^*/])*\*+"/"        { /* Block comment */ 
                                    int i;
                                    for(i = 0; i < yyleng; i++) {
                                        if(yytext[i] == '\n') {
                                            line++;
                                            column = 1;
                                        } else {
                                            column++;
                                        }
                                    }
                                  }

[ \t\r]+                          { column += yyleng; }
\n                                { line++; column = 1; }

"if"                              { add_token(yytext, "IF"); return IF; }
"else"                            { add_token(yytext, "ELSE"); return ELSE; }
"integer"                         { add_token(yytext, "INTEGER_KW"); return INTEGER_KW; }
"float"                           { add_token(yytext, "FLOAT_KW"); return FLOAT_KW; }
"while"                           { add_token(yytext, "WHILE"); return WHILE; }
"then"                            { add_token(yytext, "THEN"); return THEN; }
"read"                            { add_token(yytext, "READ"); return READ; }
"write"                           { add_token(yytext, "WRITE"); return WRITE; }
"return"                          { add_token(yytext, "RETURN"); return RETURN; }
"class"                           { add_token(yytext, "CLASS"); return CLASS; }
"func"                            { add_token(yytext, "FUNC"); return FUNC; }
"implement"                       { add_token(yytext, "IMPLEMENT"); return IMPLEMENT; }
"isa"                             { add_token(yytext, "ISA"); return ISA; }
"private"                         { add_token(yytext, "PRIVATE"); return PRIVATE; }
"public"                          { add_token(yytext, "PUBLIC"); return PUBLIC; }
"local"                           { add_token(yytext, "LOCAL"); return LOCAL; }
"void"                            { add_token(yytext, "VOID"); return VOID; }
"attribute"                       { add_token(yytext, "ATTRIBUTE"); return ATTRIBUTE; }

"=="                              { add_token(yytext, "EQ"); return EQ; }
":="                              { add_token(yytext, "ASSIGN"); return ASSIGN; }
"="                               { add_token(yytext, "EQUALS"); return EQUALS; }
"<="                              { add_token(yytext, "LE"); return LE; }
">="                              { add_token(yytext, "GE"); return GE; }
"<>"                              { add_token(yytext, "NE"); return NE; }
"<"                               { add_token(yytext, "LT"); return LT; }
">"                               { add_token(yytext, "GT"); return GT; }
"+"                               { add_token(yytext, "PLUS"); return PLUS; }
"-"                               { add_token(yytext, "MINUS"); return MINUS; }
"*"                               { add_token(yytext, "MULT"); return MULT; }
"/"                               { add_token(yytext, "DIV"); return DIV; }
"and"                             { add_token(yytext, "AND"); return AND; }
"not"                             { add_token(yytext, "NOT"); return NOT; }
"or"                              { add_token(yytext, "OR"); return OR; }

"("                               { add_token(yytext, "LPAREN"); return LPAREN; }
")"                               { add_token(yytext, "RPAREN"); return RPAREN; }
"{"                               { add_token(yytext, "LBRACE"); return LBRACE; }
"}"                               { add_token(yytext, "RBRACE"); return RBRACE; }
"["                               { add_token(yytext, "LBRACKET"); return LBRACKET; }
"]"                               { add_token(yytext, "RBRACKET"); return RBRACKET; }
";"                               { add_token(yytext, "SEMI"); return SEMI; }
","                               { add_token(yytext, "COMMA"); return COMMA; }
"."                               { add_token(yytext, "DOT"); return DOT; }
"::"                              { add_token(yytext, "SCOPE"); return SCOPE; }
":"                               { add_token(yytext, "COLON"); return COLON; }

[0-9]+\.[0-9]+([eE][+-]?[0-9]+)?  { add_token(yytext, "FLOAT"); return FLOAT; }
0|[1-9][0-9]*                     { add_token(yytext, "INT"); return INT; }
[a-zA-Z_][a-zA-Z0-9_]*            { add_token(yytext, "ID"); return ID; }
\"([^\\\"]|\\.)*\"                { add_token(yytext, "STRING"); return STRING; }

.                                 { printf("Unknown char '%c' at line %d, column %d\n", yytext[0], line, column); 
                                    column += yyleng; 
                                    return ERROR; }

%%

int yywrap() {
    return 1;
}