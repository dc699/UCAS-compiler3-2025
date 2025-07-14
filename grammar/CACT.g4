grammar CACT;

@header {
    #include "cact_types.h"
    #include "SymbolTable.h"
    #include <vector>
    #include <string>
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
    locals[
        cact_basety_t basety,
        std::vector<cact_basety_t*> passTo, 
    ]
    : 'int' 
    | 'float' 
    | 'char'
    ;

//在enterconst/varDef时为constinitval获取维度数组
arrayDims
    locals[
        std::vector<uint32_t> *dims_ptr,
    ]
    : (LeftBracket IntConst RightBracket)*
    ;

constDef 
    locals [
        cact_basety_t basety,
        std::vector<uint32_t> arraydims,
        std::string name,
        cact_type_t type,
    ]
    : IDENT arrayDims '=' constInitVal
    ;

constInitVal
    locals[
        //自顶向下继承
        cact_basety_t basety,
        //维度数组指针，值依次是从最外层到最内层的维度
        std::vector<uint32_t> *dims_ptr,
        //维度索引，最内层为0
        uint16_t dim_index,
        //表征是否最顶层，只有index为1，且为最顶层才允许以平铺列表初始化
        bool top,
        
        //IR
        //value_list为所有子元素拼接，空位置用#占位
        std::string value_list,
    ]
    : constExp 
    | '{'(constInitVal(',' constInitVal)*)?'}'  
    ;

varDecl
    : bType varDef (',' varDef)*';'
    ;

varDef 
    locals[
        //由同级btype填充
        cact_basety_t basety,
        std::vector<uint32_t> arraydims,
        std::string name,
        cact_type_t type,
    ]
    : IDENT arrayDims ('=' constInitVal)?
    ;

//在funcDef中定义列表，并将其指针传递给funcFParam填充
funcDef 
    locals[
        //由funcDef管理，funcFParam负责插入
        //用于函数声明以及添加到block作用域
        fparam_list_t fparam_list,
    ]
    : funcType IDENT'(' funcFParam? (',' funcFParam)* ')' block
    ;

funcType 
    locals[
        cact_basety_t basety,
    ]
    : 'void' 
    | 'int'
    | 'float'
    | 'char'
    ;

funcFParam  
    locals[
        //指向fparam_list的指针，用于查找重复命名和插入
        fparam_list_t *fparam_list_ptr,
        //由父节点确定的次序
        int order,
    ]
    : bType IDENT (LeftBracket (IntConst)? RightBracket (LeftBracket IntConst RightBracket)*)?
    ;

lab
    locals[
        std::string in_label,
    ]
    :
    ;

go
    locals[
        std::string out_label,
    ]
    :
    ;


block 
    locals[
        cact_basety_t ret_type,
        //形参列表添加到block作用域
        fparam_list_t *fparam_list_ptr,
        //IR
        std::string break_label,
        std::string continue_label,
    ]
    : '{' (decl|stmt)* '}'
    ;

stmt 
    locals[
        cact_basety_t ret_type,
        //IR
        std::string in_label, // 入点
        std::string out_label, // 出点
        // 传递最终确定层级
        std::string break_label,
        std::string continue_label,
    ]
    : lVal '=' exp ';'                                          #stmt_assign 
    | (exp)? ';'                                                #stmt_exp
    | block                                                     #stmt_block
    | IF '('cond')' lab stmt (go lab ELSE stmt)? lab            #stmt_if
    | lab WHILE '('cond')' lab stmt go lab                      #stmt_while
    | (BREAK | CONTINUE | RETURN exp?) ';'                      #stmt_bcr
    ;

exp 
    locals[
        cact_expr_ptr self,
        // IR
        std::string result_name,
    ]
    : addExp
    ;

constExp 
    locals[
        cact_basety_t basety,
        //IR
        std::string valstr,
    ]
    : number  //使用的IDENT必须是常量
    ;

cond 
    locals[
        //IR
        std::string true_label,
        std::string false_label,
    ]
    : lOrExp
    ;

lVal 
    locals[
        cact_expr_ptr self,
        //用于赋值时检查是否为常量
        bool is_const,

        //IR ???
        // //区分应用场景：赋值ST 1，使用LD 0 
        // bool is_store,
        //使用">n"表示偏移n个元素
        std::string result_name,
    ]
    : IDENT (LeftBracket exp RightBracket)*
    ;

number
    locals[
        cact_expr_ptr self,
    ]
    : addOp? IntConst 
    | addOp? FloatConst
    | CharConst 
    ;

primaryExp 
    locals[
        cact_expr_ptr self,
        //IR
        //结果变量名，下同
        std::string result_name,
    ]
    : number
    | lVal 
    | '('exp')' 
    ;

unaryExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
    ]
    : primaryExp 
    | (unaryOp unaryExp) 
    | IDENT '(' (funcRParams)? ')'
    ;

unaryOp
    : '+'
    | '-'
    | '!'
    ;

funcRParams 
    : exp (',' exp)*
    ;

mulExp 
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
    ]
    : unaryExp
    | mulExp mulOp unaryExp
    ;

mulOp
    : '*'
    | '/'
    | '%'
    ;

addExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
    ]
    : mulExp
    | addExp addOp mulExp
    ;

addOp
    : '+'
    | '-'
    ;

relExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
        std::string true_label,
        std::string false_label,
        bool has_label,
    ]
    : addExp
    | relExp relOp addExp
    ;

relOp
    : '<='
    | '>='
    | '<'
    | '>'
    ;

eqExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
        std::string true_label,
        std::string false_label,
        bool has_label,
    ]
    : relExp
    |'('eqExp eqOp relExp')'
    | eqExp eqOp relExp
    ;

eqOp
    : '=='
    | '!='
    ;

lAndExp
    locals[
        cact_expr_ptr self,
        // IR
        std::string true_label,
        std::string false_label,
        std::string in_label,
    ]
    : eqExp
    | lAndExp AND lab eqExp
    ;

lOrExp
    locals[
        cact_expr_ptr self,
        //IR
        //IR
        std::string result_name,
        std::string true_label,
        std::string false_label,
    ]
    : lAndExp
    | lOrExp OR lab lAndExp
    ;

/****** lexer  ******/

//标点
LeftBracket : '['       ;
RightBracket: ']'       ;
AND         : '&&'      ;
OR          : '||'      ;
IF          : 'if'      ;
ELSE        : 'else'    ;
WHILE       : 'while'   ;
BREAK       : 'break'   ;
CONTINUE    : 'continue';
RETURN      : 'return'  ;

IDENT
    : [a-zA-Z_][a-zA-Z0-9_]*
    ;

IntConst
    : DecimalConst
    | OctalConst
    | HexadecConst
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

FloatConst
    : DecimalFloatConst
    | HexadecFloatConst
    ;

fragment DecimalFloatConst
    : FractionalConst Exponent? FloatSuffix?
    | DigitSeq Exponent FloatSuffix?
    ; 

fragment HexadecFloatConst
    : HexadecPrefix HexadecFractionalConst BinaryExponent FloatSuffix?
    | HexadecPrefix HexadecDigitSeq BinaryExponent FloatSuffix? 
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

fragment HexadecFractionalConst
    : HexadecDigitSeq? '.' HexadecDigitSeq
    | HexadecDigitSeq '.'
    ;

fragment BinaryExponent
    : [pP] Sign? DigitSeq
    ;

fragment HexadecDigitSeq
    : HexadecDigit+
    ;

fragment FloatSuffix
    : [fF]
    ;

CharConst
    : '\'' Character '\''
    ;

fragment Character
    : ~['\r\n]
    | '\\''n'
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