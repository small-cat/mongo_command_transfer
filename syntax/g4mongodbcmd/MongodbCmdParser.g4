parser grammar MongodbCmdParser;

options {
    tokenVocab = MongodbCmdLexer;
}

/* mongo command used with runCommand or adminCommand, but mongo shell command
 * is different, the latter wraps the former */

// use test;
// db.runCommand()
// db.adminCommand()
// db.getSiblingDB().runCommand()
// ...
stmt
    : db_name (DOT function_call)* DOT command_function LPAREN arguments RPAREN
    | db_name (DOT function_call)*
    | use_stmt
    ; 

command_function
    : RUNCOMMAND
    | ADMINCOMMAND
    ;

use_stmt
    : M_USE db_name
    ;

db_name
    : IDENTIFIER
    ;

function_name
    : IDENTIFIER | ID_START_WITH_UNDERLINE
    ;

// list, key-value
arguments
    : mlist
    ;

// ["blank", "red"]
marray
    : LBRACKET mvalue (COMMA mvalue)* RBRACKET
    ;

// { ... }
mlist
    : LBRACE (key_value (COMMA key_value)*)? RBRACE
    ;

// KEY:VALUE
key_value
    : mkey COLON mvalue
    ;

mkey
    : IDENTIFIER
    | ID_START_WITH_UNDERLINE
    | M_STRINGS
    | MONGO_OPERATORS   // $lt $gt ...
    ;

mvalue
    : scientific_num
    | M_STRINGS
    | UNSIGNED_INTEGER
    | marray
    | mlist
    | REGEX_STRINGS
    | M_TRUE
    | M_FALSE
    | function_call
    | js_stmts
    | general_expression
    ;

// 科学技术法， 形如 
// .5e2 = 0.5 * 10^2 = 50
// 0.5e2
// 0.5E+2
// .5E-2 = 0.005
// e 或者 E 后面不能是 浮点数，mongodb 会直接报错
scientific_num
    : APPROXIMATE_NUM
    ;

// support function call, like: 
//      { "_id" : 1, "item" : "binder", "qty" : NumberInt("100"), "price" : NumberDecimal("12") }
function_call
    : function_name (LPAREN func_args? RPAREN)?
    ;

func_args
    : func_arg (COMMA func_arg)*
    ;

func_arg
    : IDENTIFIER | ID_START_WITH_UNDERLINE | mvalue
    ;

// java script sentences, like
// new Date()
// function(arg1, arg2, ...) { ... }
js_stmts
    : M_NEW function_call
    | M_FUNCTION LPAREN func_args? RPAREN LBRACE js_function_body RBRACE
    ;

js_function_body
    : (DOT | IDENTIFIER | ID_START_WITH_UNDERLINE | BACK_SLASH_STRINGS | UNSIGNED_INTEGER
      | scientific_num | LPAREN | RPAREN | LBRACE | RBRACE | SEMI | COMMA
      | DOLLAR | EQ | GT | LT | M_STRINGS
      )+
    ;

// mongodb support expression in mvalue, like:
//      age: 1+4
general_expression
    : relational_expression
    | NOT general_expression
    | general_expression (AND | OR) general_expression
    ;

relational_expression
    : relational_expression relational_operator relational_expression
    | binary_expression
    ;

relational_operator
    : EQ
    | GT
    | LT
    | GE
    | LE
    | NE
    ;

binary_expression
    : unary_expression
    | binary_expression binary_operator binary_expression
    ;

binary_operator
    : MULTI
    | DIV
    | PLUS
    | MINUS
    ;

unary_expression
    : (PLUS | MINUS | INVERT) unary_expression
    | LPAREN general_expression RPAREN
    | constant
    ;

constant
    : UNSIGNED_INTEGER
    | scientific_num
    | M_STRINGS
    | M_TRUE
    | M_FALSE
    | REGEX_STRINGS
    ;