/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>

// External reference to Flex
int yylex();
void yyerror(const char *s);
extern void print_symbol_table();
extern int line, column;
extern FILE *yyin;  // For file input

#line 83 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_THEN = 6,                       /* THEN  */
  YYSYMBOL_READ = 7,                       /* READ  */
  YYSYMBOL_WRITE = 8,                      /* WRITE  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_INTEGER_KW = 10,                /* INTEGER_KW  */
  YYSYMBOL_FLOAT_KW = 11,                  /* FLOAT_KW  */
  YYSYMBOL_VOID = 12,                      /* VOID  */
  YYSYMBOL_EQ = 13,                        /* EQ  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_EQUALS = 15,                    /* EQUALS  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_GE = 17,                        /* GE  */
  YYSYMBOL_LT = 18,                        /* LT  */
  YYSYMBOL_GT = 19,                        /* GT  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_PLUS = 21,                      /* PLUS  */
  YYSYMBOL_MINUS = 22,                     /* MINUS  */
  YYSYMBOL_MULT = 23,                      /* MULT  */
  YYSYMBOL_DIV = 24,                       /* DIV  */
  YYSYMBOL_AND = 25,                       /* AND  */
  YYSYMBOL_OR = 26,                        /* OR  */
  YYSYMBOL_NOT = 27,                       /* NOT  */
  YYSYMBOL_LPAREN = 28,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 29,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 30,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 31,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 32,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 33,                  /* RBRACKET  */
  YYSYMBOL_SEMI = 34,                      /* SEMI  */
  YYSYMBOL_COMMA = 35,                     /* COMMA  */
  YYSYMBOL_DOT = 36,                       /* DOT  */
  YYSYMBOL_SCOPE = 37,                     /* SCOPE  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_CLASS = 39,                     /* CLASS  */
  YYSYMBOL_FUNC = 40,                      /* FUNC  */
  YYSYMBOL_IMPLEMENT = 41,                 /* IMPLEMENT  */
  YYSYMBOL_ISA = 42,                       /* ISA  */
  YYSYMBOL_PRIVATE = 43,                   /* PRIVATE  */
  YYSYMBOL_PUBLIC = 44,                    /* PUBLIC  */
  YYSYMBOL_LOCAL = 45,                     /* LOCAL  */
  YYSYMBOL_ATTRIBUTE = 46,                 /* ATTRIBUTE  */
  YYSYMBOL_ID = 47,                        /* ID  */
  YYSYMBOL_INT = 48,                       /* INT  */
  YYSYMBOL_FLOAT = 49,                     /* FLOAT  */
  YYSYMBOL_STRING = 50,                    /* STRING  */
  YYSYMBOL_ERROR = 51,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_program = 53,                   /* program  */
  YYSYMBOL_class_list = 54,                /* class_list  */
  YYSYMBOL_class_decl = 55,                /* class_decl  */
  YYSYMBOL_ID_list = 56,                   /* ID_list  */
  YYSYMBOL_member_list = 57,               /* member_list  */
  YYSYMBOL_member = 58,                    /* member  */
  YYSYMBOL_visibility = 59,                /* visibility  */
  YYSYMBOL_field_decl = 60,                /* field_decl  */
  YYSYMBOL_method_decl = 61,               /* method_decl  */
  YYSYMBOL_param_list = 62,                /* param_list  */
  YYSYMBOL_param = 63,                     /* param  */
  YYSYMBOL_stmt_list = 64,                 /* stmt_list  */
  YYSYMBOL_stmt = 65,                      /* stmt  */
  YYSYMBOL_assignment_stmt = 66,           /* assignment_stmt  */
  YYSYMBOL_return_stmt = 67,               /* return_stmt  */
  YYSYMBOL_block_stmt = 68,                /* block_stmt  */
  YYSYMBOL_decl_stmt = 69,                 /* decl_stmt  */
  YYSYMBOL_type = 70,                      /* type  */
  YYSYMBOL_expr_stmt = 71,                 /* expr_stmt  */
  YYSYMBOL_if_stmt = 72,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 73,                /* while_stmt  */
  YYSYMBOL_io_stmt = 74,                   /* io_stmt  */
  YYSYMBOL_expr = 75,                      /* expr  */
  YYSYMBOL_arg_list = 76                   /* arg_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   728

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    36,    40,    41,    45,    46,    47,    51,
      52,    56,    57,    61,    62,    63,    64,    68,    69,    73,
      74,    75,    79,    80,    81,    82,    86,    87,    91,    92,
      96,    97,   101,   102,   103,   104,   105,   106,   107,   108,
     112,   113,   114,   118,   119,   123,   124,   128,   129,   130,
     131,   135,   136,   137,   138,   142,   143,   147,   148,   149,
     150,   154,   158,   159,   160,   161,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   195,   196
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "WHILE",
  "THEN", "READ", "WRITE", "RETURN", "INTEGER_KW", "FLOAT_KW", "VOID",
  "EQ", "ASSIGN", "EQUALS", "LE", "GE", "LT", "GT", "NE", "PLUS", "MINUS",
  "MULT", "DIV", "AND", "OR", "NOT", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "LBRACKET", "RBRACKET", "SEMI", "COMMA", "DOT", "SCOPE",
  "COLON", "CLASS", "FUNC", "IMPLEMENT", "ISA", "PRIVATE", "PUBLIC",
  "LOCAL", "ATTRIBUTE", "ID", "INT", "FLOAT", "STRING", "ERROR", "$accept",
  "program", "class_list", "class_decl", "ID_list", "member_list",
  "member", "visibility", "field_decl", "method_decl", "param_list",
  "param", "stmt_list", "stmt", "assignment_stmt", "return_stmt",
  "block_stmt", "decl_stmt", "type", "expr_stmt", "if_stmt", "while_stmt",
  "io_stmt", "expr", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -27,     0,    18,    21,   294,  -110,  -110,  -110,    97,
     -12,     1,   131,    66,    62,  -110,   303,  -110,  -110,  -110,
    -110,  -110,    56,  -110,  -110,  -110,  -110,   353,   353,    63,
     353,   353,   353,  -110,   -22,  -110,  -110,  -110,   391,  -110,
     108,    -6,  -110,    75,   353,   353,   353,    77,  -110,  -110,
    -110,   -11,   633,   647,   104,   661,  -110,   675,   325,   353,
     107,   121,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,  -110,  -110,     7,   122,     6,   410,
     429,   543,   157,   353,  -110,   211,   303,    78,   353,   139,
     155,  -110,  -110,   689,   114,   561,   162,   163,    74,    41,
      41,    41,    41,    74,    65,    65,  -110,  -110,   226,   703,
     145,  -110,  -110,   140,  -110,    -3,  -110,  -110,   146,   164,
      91,   353,  -110,  -110,  -110,   -10,   353,   448,   303,   192,
    -110,  -110,   579,   168,  -110,  -110,   353,   166,   341,   349,
     172,  -110,  -110,  -110,  -110,    53,     7,     7,   154,   467,
     353,   353,   486,  -110,   198,   303,   177,   174,   689,   353,
    -110,   129,  -110,   130,   119,    87,  -110,   315,   320,  -110,
    -110,   505,   597,  -110,   303,  -110,   176,  -110,   615,  -110,
    -110,    15,   144,  -110,   178,   180,   194,  -110,  -110,  -110,
     219,  -110,  -110,  -110,   303,     1,    30,     1,   203,   204,
     206,   353,   221,   207,   303,     1,  -110,   205,   227,  -110,
     524,  -110,   303,   252,   223,  -110,   243,  -110,   262,  -110,
     303,   220,  -110,   293,  -110,  -110
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    51,    52,    53,     0,
       0,     0,    54,     0,     2,     5,     3,    31,    39,    38,
      37,    36,     0,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    44,    80,    90,    91,    92,     0,    46,
       0,     0,    54,     0,     0,     0,     0,     0,     1,     4,
      30,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,    79,    85,    94,     0,     0,    81,     0,    74,    72,
      73,    70,    71,    75,    66,    67,    68,    69,    76,    77,
       0,    18,    17,     0,    12,     0,    13,    14,     0,    10,
       0,     0,    50,    55,    56,     0,     0,     0,     0,    60,
      61,    62,     0,     0,    65,    84,     0,    82,     0,     0,
       0,     6,    11,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    58,     0,     0,     0,    93,     0,
      87,     0,    89,     0,     0,     0,    19,     0,     0,     9,
      49,     0,     0,    40,     0,    59,     0,    63,     0,    86,
      88,     0,     0,    27,     0,     0,     0,     7,     8,    41,
       0,    57,    64,    83,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    20,
       0,    25,     0,     0,     0,    29,     0,    42,     0,    24,
       0,     0,    23,     0,    21,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,   263,  -110,    29,  -109,  -110,   165,   169,
    -110,    81,    -9,   -14,  -110,  -110,  -110,  -110,    10,  -110,
    -110,  -110,  -110,    11,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    13,    14,    15,   120,   113,   114,   115,   116,   117,
     182,   183,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    93,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,    27,    50,    83,   142,   150,    58,     6,     7,     8,
      59,     6,     7,     8,    60,    61,    38,     6,     7,     8,
     121,    43,   151,    84,    76,     1,    50,     2,    28,     3,
       4,     5,     6,     7,     8,    41,    77,   110,    52,    53,
     122,    55,    56,    57,    42,   194,    29,   110,    42,    30,
     111,   112,     9,   195,    42,    79,    80,    81,   142,   142,
     204,    10,    68,    69,    70,    71,    48,    11,   205,    12,
      95,   129,   130,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   165,   118,   166,    70,    71,
      63,    64,    65,    66,   127,    68,    69,    70,    71,   132,
       1,    10,     2,    51,     3,     4,     5,     6,     7,     8,
      54,     1,   131,     2,   154,     3,     4,     5,     6,     7,
       8,   147,    78,   118,    82,   118,   148,     9,    39,     6,
       7,     8,   149,    87,   185,   186,    88,   152,     9,    75,
      89,   175,    11,   135,    12,    44,    45,   158,   181,   136,
       6,     7,     8,    11,    96,    12,   118,   118,   179,   180,
     191,   171,   172,    46,   136,   136,    42,    47,    97,   119,
     178,   141,   126,   196,   184,   167,   168,   118,   118,   197,
     110,   161,   163,   111,   112,   202,   133,    42,    50,   134,
     138,   139,   140,   145,   146,   213,   155,   157,   159,    50,
     164,   169,   174,   218,    50,   203,   176,   184,   177,    50,
     192,   223,   210,   199,     1,   214,     2,   128,     3,     4,
       5,     6,     7,     8,     1,   198,     2,   200,     3,     4,
       5,     6,     7,     8,   201,   207,   208,   212,   215,    62,
     209,     9,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     9,   211,   220,   224,     1,    11,     2,    12,     3,
       4,     5,     6,     7,     8,     1,    11,     2,    12,     3,
       4,     5,     6,     7,     8,   216,   221,    49,   206,     0,
     143,     0,     9,   219,   144,     0,     0,     0,     0,     0,
       0,     0,     9,   222,     0,     0,     1,    11,     2,    12,
       3,     4,     5,     6,     7,     8,     1,    11,     2,    12,
       3,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       0,    31,    32,     9,   225,     6,     7,     8,    33,     0,
       6,     7,     8,     9,     0,     0,     0,     0,    11,     0,
      12,    34,    35,    36,    37,     0,   187,     0,    11,     0,
      12,   188,    31,    32,    92,   110,     0,     0,   111,   112,
     110,     0,    42,   111,   112,     0,     0,    42,    31,    32,
     160,     0,    34,    35,    36,    37,    31,    32,   162,     0,
      31,    32,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,     0,     0,     0,     0,    34,    35,    36,    37,
      34,    35,    36,    37,    62,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,    62,     0,    74,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       0,     0,    62,     0,   123,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,     0,     0,
       0,    62,     0,   124,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,     0,     0,     0,
      62,     0,   153,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,     0,     0,     0,    62,
       0,   170,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,     0,     0,     0,    62,     0,
     173,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,    62,     0,   189,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,     0,     0,     0,    62,     0,   217,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,     0,     0,    62,     0,   125,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,    62,     0,   137,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,     0,     0,
      62,     0,   156,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,     0,     0,    62,     0,
     190,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,    62,     0,   193,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      62,     0,    85,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    62,     0,    86,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    62,     0,
      90,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    62,     0,    91,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    62,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72
};

static const yytype_int16 yycheck[] =
{
       9,    28,    16,    14,   113,    15,    28,    10,    11,    12,
      32,    10,    11,    12,    36,    37,     5,    10,    11,    12,
      14,    11,    32,    34,    30,     3,    40,     5,    28,     7,
       8,     9,    10,    11,    12,    47,    42,    40,    27,    28,
      34,    30,    31,    32,    47,    30,    28,    40,    47,    28,
      43,    44,    30,    38,    47,    44,    45,    46,   167,   168,
      30,    39,    21,    22,    23,    24,     0,    45,    38,    47,
      59,    85,    86,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    32,    76,    34,    23,    24,
      16,    17,    18,    19,    83,    21,    22,    23,    24,    88,
       3,    39,     5,    47,     7,     8,     9,    10,    11,    12,
      47,     3,    34,     5,   128,     7,     8,     9,    10,    11,
      12,    30,    47,   113,    47,   115,    35,    30,    31,    10,
      11,    12,   121,    29,    47,    48,    32,   126,    30,    31,
      36,   155,    45,    29,    47,    14,    15,   136,    29,    35,
      10,    11,    12,    45,    47,    47,   146,   147,    29,    29,
     174,   150,   151,    32,    35,    35,    47,    36,    47,    47,
     159,    31,    15,    29,   164,   146,   147,   167,   168,    35,
      40,   138,   139,    43,    44,   194,    47,    47,   202,    34,
      28,    28,    47,    47,    30,   204,     4,    29,    32,   213,
      28,    47,     4,   212,   218,   195,    29,   197,    34,   223,
      34,   220,   201,    33,     3,   205,     5,     6,     7,     8,
       9,    10,    11,    12,     3,    47,     5,    33,     7,     8,
       9,    10,    11,    12,    15,    32,    32,    30,    33,    13,
      34,    30,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    30,    31,    30,    34,     3,    45,     5,    47,     7,
       8,     9,    10,    11,    12,     3,    45,     5,    47,     7,
       8,     9,    10,    11,    12,    48,    33,    14,   197,    -1,
     115,    -1,    30,    31,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,     3,    45,     5,    47,
       7,     8,     9,    10,    11,    12,     3,    45,     5,    47,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    27,    28,    30,    31,    10,    11,    12,    34,    -1,
      10,    11,    12,    30,    -1,    -1,    -1,    -1,    45,    -1,
      47,    47,    48,    49,    50,    -1,    31,    -1,    45,    -1,
      47,    31,    27,    28,    29,    40,    -1,    -1,    43,    44,
      40,    -1,    47,    43,    44,    -1,    -1,    47,    27,    28,
      29,    -1,    47,    48,    49,    50,    27,    28,    29,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      47,    48,    49,    50,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    34,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    34,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    34,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    34,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    34,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      34,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    13,    -1,    34,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    13,    -1,    34,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    13,    -1,    33,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    13,    -1,    33,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      13,    -1,    33,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    13,    -1,
      33,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    13,    -1,    33,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      13,    -1,    29,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    13,    -1,    29,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    13,    -1,
      29,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    13,    -1,    29,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     8,     9,    10,    11,    12,    30,
      39,    45,    47,    53,    54,    55,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    28,    28,    28,
      28,    27,    28,    34,    47,    48,    49,    50,    75,    31,
      64,    47,    47,    70,    14,    15,    32,    36,     0,    55,
      65,    47,    75,    75,    47,    75,    75,    75,    28,    32,
      36,    37,    13,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    34,    31,    30,    42,    47,    75,
      75,    75,    47,    14,    34,    29,    29,    29,    32,    36,
      29,    29,    29,    75,    76,    75,    47,    47,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      40,    43,    44,    57,    58,    59,    60,    61,    70,    47,
      56,    14,    34,    34,    34,    33,    15,    75,     6,    65,
      65,    34,    75,    47,    34,    29,    35,    33,    28,    28,
      47,    31,    58,    60,    61,    47,    30,    30,    35,    75,
      15,    32,    75,    34,    65,     4,    33,    29,    75,    32,
      29,    76,    29,    76,    28,    32,    34,    57,    57,    47,
      34,    75,    75,    34,     4,    65,    29,    34,    75,    29,
      29,    29,    62,    63,    70,    47,    48,    31,    31,    34,
      33,    65,    34,    33,    30,    38,    29,    35,    47,    33,
      33,    15,    64,    70,    30,    38,    63,    32,    32,    34,
      75,    31,    30,    64,    70,    33,    48,    34,    64,    31,
      30,    33,    31,    64,    34,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    55,    56,
      56,    57,    57,    58,    58,    58,    58,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    71,    71,    72,    72,    72,
      72,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     5,     7,     7,     3,
       1,     2,     1,     1,     1,     2,     2,     1,     1,     3,
       6,     9,    10,     9,     8,     7,     3,     1,     2,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     7,    10,     3,     2,     3,     2,     5,     3,     6,
       4,     1,     1,     1,     1,     4,     4,     8,     6,     7,
       5,     5,     5,     7,     8,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     3,     4,     7,     4,     3,     6,     5,     6,     5,
       1,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1386 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 199 "parser.y"


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
