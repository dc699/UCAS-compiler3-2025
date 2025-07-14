#include <iostream>

// #include "antlr4-runtime.h"
#include "tree/ErrorNode.h"

#include "CACTLexer.h"
#include "CACTParser.h"
#include "SemanticAnalysis.h"
#include "IRgen.h"
#include "RiscvGen.h"

using namespace antlr4;

SymbolTable         symbol_table;
TypeUtils           typeutils;
SemanticAnalysis    semantic_analysis;
RiscvGen            riscv_gen;

class Analysis : public antlr4::tree::ParseTreeListener {
    public:
        virtual void enterEveryRule(ParserRuleContext* ctx) override {}
        virtual void visitTerminal(tree::TerminalNode* node) override {}
        virtual void visitErrorNode(tree::ErrorNode* node) override 
        {
            std::cout << "False" << std::endl;
            exit(1);
        }
        virtual void exitEveryRule(ParserRuleContext* ctx) override {}
};

int main(int argc, const char* argv[]) {
    if (argc < 2)
    {
        std::cerr << "Error: Missing filename!" << std::endl;
        return 1;
    }
    std::ifstream stream;
    stream.open(argv[1]);
    
    ANTLRInputStream input(stream);
    CACTLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CACTParser parser(&tokens);

    tree::ParseTree *tree = parser.compUnit();

    //std::cout << "---------------------------Print AST:-----------------------------" << std::endl;
    //std::cout << tree->toStringTree(&parser) << std::endl;

    if (tokens.LA(1) != antlr4::Token::EOF) {
        std::cerr << "Error: extra input after valid program" << std::endl;
        std::cerr << "Remaining token: " << tokens.LT(1)->getText() << std::endl;
        return 1;  
    }

    Analysis listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    //semantic
    tree::ParseTreeWalker::DEFAULT.walk(&semantic_analysis, tree);

    //std::cout << "True" << std::endl;
    semantic_analysis.printAllIRCodes();

    // Interpreter interpreter(semantic_analysis.IRC_array,
    //                         semantic_analysis.Temp_array,
    //                         semantic_analysis.Lvar_array,
    //                         semantic_analysis.Gvar_array);
    // interpreter.run();

    #ifdef ASM_gen
    std::string cact_path = argv[1];
    std::string asm_name = cact_path.substr(cact_path.rfind('/')+1,cact_path.rfind('.')-cact_path.rfind('/')-1) + ".S";
    std::cout << cact_path << std::endl;
    riscv_gen.Gen_All(asm_name);
    #endif
    return 0;
}


/*
class Analysis : public HelloVisitor {
public:
    std::any visitR(HelloParser::RContext *context) {
        visitChildren( context );
        
        std::cout << "enter rule [r]!" << std::endl;
        std::cout << "the ID is: " << context->ID()->getText().c_str() << std::endl;
        return nullptr;
    }

    std::any visitErrorNode(tree::ErrorNode * node) override {
        std::cout << "visit error node!" << std::endl;
        return nullptr;
    }
};

int main(int argc, const char* argv[]) {
  std::ifstream stream;
  stream.open("../test.hello");

  ANTLRInputStream   input(stream);
  HelloLexer         lexer(&input);
  CommonTokenStream  tokens(&lexer);
  HelloParser        parser(&tokens);

  Analysis visitor;
  visitor.visit( parser.r() );

  return 0;
}
*/