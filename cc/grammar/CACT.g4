grammar CACT;

@header {
    #include <vector>
}

/****** parser ******/
compUnit 
    : (decl | funcDef)+
    ;

decl 
    : constDecl 
    | varDecl
    ;

constDecl 
    : 'const' bType constDef (',' constDef)* ';'
    ;

bType 
    : 'int' 
    | 'float' 
    | 'char'
    ;

constDef 
    : IDENT ('['IntConst']')* '=' constInitVal
    ;

constInitVal
    : constExp 
    | '{'(constInitVal(',' constInitVal)*)?'}'  
    ;

varDecl
    : bType varDef (',' varDef)*';'
    ;

varDef 
    : IDENT ('[' IntConst ']')* ('=' constInitVal)?
    ;

funcDef 
    : funcType IDENT'(' funcFParams? ')' block
    ;

funcType 
    : 'void' 
    | 'int'
    | 'float'
    | 'char'
    ;

funcFParams 
    : funcFParam (','funcFParam)*
    ;

funcFParam  
    : bType IDENT ('[' IntConst? ']' ('[' IntConst ']')*)?
    ;

block 
    : '{' blockItem* '}'
    ;

blockItem 
    : decl 
    | stmt;

stmt 
    : lVal '=' exp ';' 
    | exp? ';' 
    | block 
    | 'return' exp? 
    | 'if' '('cond')' stmt ('else' stmt)?
    | 'while' '('cond')' stmt
    | 'break' ';' 
    | 'continue' ';'
    ;

exp 
    : addExp
    ;

constExp 
    : number  //使用的IDENT必须是常量
    ;

cond 
    : lOrExp
    ;

lVal 
    : IDENT ('['exp']')*
    ;

number
    : IntConst 
    | CharConst 
    | FloatConst
    ;

funcRParams 
    : exp (',' exp)*
    ;

primaryExp 
    : '('exp')' | lVal | number
    ;

unaryExp
    : primaryExp 
    | (unaryOp unaryExp) 
    | IDENT '(' (funcRParams)? ')'
    ;

unaryOp
    : '+'
    | '-'
    | '!'
    ;

mulExp 
    : unaryExp (mulOp unaryExp)*
    ;

mulOp
    : '*'
    | '/'
    | '%'
    ;

addExp
    : mulExp (addOp mulExp)*
    ;

addOp
    : '+'
    | '-'
    ;

relExp
    : addExp (relOp addExp)*
    ;

relOp
    : '<='
    | '>='
    | '<'
    | '>'
    ;

eqExp
    : relExp (eqOp relExp)*
    ;

eqOp
    : '=='
    | '!='
    ;

lAndExp
    : eqExp ('&&' eqExp)*
    ;

lOrExp
    : lAndExp ('||' lAndExp)*
    ;

/****** lexer  ******/

IDENT
    : [a-zA-Z_][a-zA-Z0-9_]*
    ;

IntConst
    : DecimalConst
    | OctalConst
    | HexadecConst
    ;

FloatConst
    : FractionalConst Exponent? FloatSuffix?
    | DigitSeq Exponent FloatSuffix?
    ;

CharConst
    : '\'' Character '\''
    ;

fragment DecimalConst
    : NonZeroDigit Digit*
    ;

fragment OctalConst
    : '0' OctalDigit*
    ;

fragment HexadecConst
    : HexadecPrefix HexadecDigit+
    ;

fragment Character
    : ~['\r\n]
    ;

fragment NonZeroDigit
    : [1-9]
    ;

fragment Digit
    : [0-9]
    ;

fragment OctalDigit
    : [0-7]
    ;

fragment HexadecPrefix
    : '0x'
    | '0X'
    ;

fragment HexadecDigit
    : [0-9a-fA-F]
    ; 

fragment FractionalConst
    : DigitSeq? '.' DigitSeq
    | DigitSeq '.'
    ; 

fragment Exponent
    : [eE] Sign? DigitSeq
    ; 

fragment Sign
    : [+-]
    ;

fragment DigitSeq
    : Digit+
    ;

fragment FloatSuffix
    : [fF]
    ;

/****** skips  ******/
WS 
    : [ \t\r\n]+ -> skip 
    ; 

NEWLINE
    : ('\r' '\n'? | '\n') -> skip
    ;

BLOCKCOMMENT
    : '/*' .*? '*/' -> skip
    ;

LINECOMMENT
    : '//' ~[\r\n]* -> skip
    ;

//test