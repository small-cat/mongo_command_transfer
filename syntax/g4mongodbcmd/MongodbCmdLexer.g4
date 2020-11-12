lexer grammar MongodbCmdLexer;

M_E         : 'E' | 'e';
M_TRUE      : 'true';
M_FALSE     : 'false';
M_NEW       : 'new';
M_FUNCTION  : 'function';
RUNCOMMAND  : 'runCommand';
ADMINCOMMAND: 'adminCommand';
M_USE       : 'use';

// db and collection name
// 1. can not start with '_' and digit
// 2. can not contains special characters, suck as ~ `, !, @, #, $, %, ^, &, *, /, ( ...
// 3. case sensitive

// value field
// 1. can not start with digit
// 2. can start with '_'
// 3. could contain $
// 4. key and value are both case sensitive

UNSIGNED_INTEGER: DIGIT+;
APPROXIMATE_NUM: (FLOAT_NUM | DIGIT+) (('E' | 'e') ('+' | '-')? DIGIT+)?;
MONGO_OPERATORS: '$' ALPHA*; 

IDENTIFIER: ALPHA (ALPHA | DIGIT | '_' | '$')*;
ID_START_WITH_UNDERLINE: '_' (ALPHA | DIGIT | '_' | '$')*;
M_STRINGS: '"' ( '\\"' | ~('"' | '\r' | '\n'))* '"';
BACK_SLASH_STRINGS: '`' ~('\r' | '\n' | '`')* '`';

// used by $regex
// { <field>: { $regex: /pattern/, $options: '<options>' } }
// { <field>: { $regex: 'pattern', $options: '<options>' } }
// { <field>: { $regex: /pattern/<options> } }
REGEX_STRINGS
    : '/' [a-zA-Z0-9_+*?.^\\]* '/' ALPHA?
    | '\'' ~('\'' | '\r' | '\n')* '\'';

DOT:        '.';
DOLLAR:     '$';
UNDERLINE:  '_';
COLON:      ':';

LPAREN:     '(';
RPAREN:     ')';
LBRACKET:   '[';
RBRACKET:   ']';
LBRACE:     '{';
RBRACE:     '}';
COMMA:      ',';
SEMI:       ';';

PLUS:       '+';
MINUS:      '-';
MULTI:      '*';
DIV:        '/';
GT:         '>';
LT:         '<';
EQ:         '=';
GE:         '>=';
LE:         '<=';
NE:         '!=';

AND:        '&';
OR:         '|';
NOT:        '!';
XOR:        '^';
INVERT:     '~';

LSHIFT:     '<<';
RSHIFT:     '>>';

SPACES: [ \t\r\n]+ -> channel(HIDDEN);

fragment ALPHA: [a-zA-Z];
fragment DIGIT: [0-9];
fragment FLOAT_NUM: UNSIGNED_INTEGER* '.'? UNSIGNED_INTEGER;