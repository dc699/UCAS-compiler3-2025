
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1


#include "CACTListener.h"
#include "CACTVisitor.h"

#include "CACTParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CACTParserStaticData final {
  CACTParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CACTParserStaticData(const CACTParserStaticData&) = delete;
  CACTParserStaticData(CACTParserStaticData&&) = delete;
  CACTParserStaticData& operator=(const CACTParserStaticData&) = delete;
  CACTParserStaticData& operator=(CACTParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cactParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CACTParserStaticData *cactParserStaticData = nullptr;

void cactParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cactParserStaticData != nullptr) {
    return;
  }
#else
  assert(cactParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CACTParserStaticData>(
    std::vector<std::string>{
      "compUnit", "decl", "constDecl", "bType", "constDef", "constInitVal", 
      "varDecl", "varDef", "funcDef", "funcType", "funcFParams", "funcFParam", 
      "block", "blockItem", "stmt", "exp", "constExp", "cond", "lVal", "number", 
      "funcRParams", "primaryExp", "unaryExp", "unaryOp", "mulExp", "mulOp", 
      "addExp", "addOp", "relExp", "relOp", "eqExp", "eqOp", "lAndExp", 
      "lOrExp"
    },
    std::vector<std::string>{
      "", "'const'", "','", "';'", "'int'", "'float'", "'char'", "'['", 
      "']'", "'='", "'{'", "'}'", "'('", "')'", "'void'", "'return'", "'if'", 
      "'else'", "'while'", "'break'", "'continue'", "'+'", "'-'", "'!'", 
      "'*'", "'/'", "'%'", "'<='", "'>='", "'<'", "'>'", "'=='", "'!='", 
      "'&&'", "'||'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "IDENT", "IntConst", "FloatConst", "CharConst", "WS", "NEWLINE", 
      "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,42,336,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,4,0,71,8,
  	0,11,0,12,0,72,1,1,1,1,3,1,77,8,1,1,2,1,2,1,2,1,2,1,2,5,2,84,8,2,10,2,
  	12,2,87,9,2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,5,4,97,8,4,10,4,12,4,100,
  	9,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,5,5,110,8,5,10,5,12,5,113,9,5,3,5,
  	115,8,5,1,5,3,5,118,8,5,1,6,1,6,1,6,1,6,5,6,124,8,6,10,6,12,6,127,9,6,
  	1,6,1,6,1,7,1,7,1,7,1,7,5,7,135,8,7,10,7,12,7,138,9,7,1,7,1,7,3,7,142,
  	8,7,1,8,1,8,1,8,1,8,3,8,148,8,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,10,5,
  	10,158,8,10,10,10,12,10,161,9,10,1,11,1,11,1,11,1,11,3,11,167,8,11,1,
  	11,1,11,1,11,1,11,5,11,173,8,11,10,11,12,11,176,9,11,3,11,178,8,11,1,
  	12,1,12,5,12,182,8,12,10,12,12,12,185,9,12,1,12,1,12,1,13,1,13,3,13,191,
  	8,13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,199,8,14,1,14,1,14,1,14,1,14,
  	3,14,205,8,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,214,8,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,226,8,14,1,15,1,15,1,
  	16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,5,18,239,8,18,10,18,12,18,
  	242,9,18,1,19,1,19,1,20,1,20,1,20,5,20,249,8,20,10,20,12,20,252,9,20,
  	1,21,1,21,1,21,1,21,1,21,1,21,3,21,260,8,21,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,22,3,22,269,8,22,1,22,3,22,272,8,22,1,23,1,23,1,24,1,24,1,24,1,
  	24,5,24,280,8,24,10,24,12,24,283,9,24,1,25,1,25,1,26,1,26,1,26,1,26,5,
  	26,291,8,26,10,26,12,26,294,9,26,1,27,1,27,1,28,1,28,1,28,1,28,5,28,302,
  	8,28,10,28,12,28,305,9,28,1,29,1,29,1,30,1,30,1,30,1,30,5,30,313,8,30,
  	10,30,12,30,316,9,30,1,31,1,31,1,32,1,32,1,32,5,32,323,8,32,10,32,12,
  	32,326,9,32,1,33,1,33,1,33,5,33,331,8,33,10,33,12,33,334,9,33,1,33,0,
  	0,34,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,0,8,1,0,4,6,2,0,4,6,14,14,1,0,36,38,
  	1,0,21,23,1,0,24,26,1,0,21,22,1,0,27,30,1,0,31,32,342,0,70,1,0,0,0,2,
  	76,1,0,0,0,4,78,1,0,0,0,6,90,1,0,0,0,8,92,1,0,0,0,10,117,1,0,0,0,12,119,
  	1,0,0,0,14,130,1,0,0,0,16,143,1,0,0,0,18,152,1,0,0,0,20,154,1,0,0,0,22,
  	162,1,0,0,0,24,179,1,0,0,0,26,190,1,0,0,0,28,225,1,0,0,0,30,227,1,0,0,
  	0,32,229,1,0,0,0,34,231,1,0,0,0,36,233,1,0,0,0,38,243,1,0,0,0,40,245,
  	1,0,0,0,42,259,1,0,0,0,44,271,1,0,0,0,46,273,1,0,0,0,48,275,1,0,0,0,50,
  	284,1,0,0,0,52,286,1,0,0,0,54,295,1,0,0,0,56,297,1,0,0,0,58,306,1,0,0,
  	0,60,308,1,0,0,0,62,317,1,0,0,0,64,319,1,0,0,0,66,327,1,0,0,0,68,71,3,
  	2,1,0,69,71,3,16,8,0,70,68,1,0,0,0,70,69,1,0,0,0,71,72,1,0,0,0,72,70,
  	1,0,0,0,72,73,1,0,0,0,73,1,1,0,0,0,74,77,3,4,2,0,75,77,3,12,6,0,76,74,
  	1,0,0,0,76,75,1,0,0,0,77,3,1,0,0,0,78,79,5,1,0,0,79,80,3,6,3,0,80,85,
  	3,8,4,0,81,82,5,2,0,0,82,84,3,8,4,0,83,81,1,0,0,0,84,87,1,0,0,0,85,83,
  	1,0,0,0,85,86,1,0,0,0,86,88,1,0,0,0,87,85,1,0,0,0,88,89,5,3,0,0,89,5,
  	1,0,0,0,90,91,7,0,0,0,91,7,1,0,0,0,92,98,5,35,0,0,93,94,5,7,0,0,94,95,
  	5,36,0,0,95,97,5,8,0,0,96,93,1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,
  	99,1,0,0,0,99,101,1,0,0,0,100,98,1,0,0,0,101,102,5,9,0,0,102,103,3,10,
  	5,0,103,9,1,0,0,0,104,118,3,32,16,0,105,114,5,10,0,0,106,111,3,10,5,0,
  	107,108,5,2,0,0,108,110,3,10,5,0,109,107,1,0,0,0,110,113,1,0,0,0,111,
  	109,1,0,0,0,111,112,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,114,106,1,
  	0,0,0,114,115,1,0,0,0,115,116,1,0,0,0,116,118,5,11,0,0,117,104,1,0,0,
  	0,117,105,1,0,0,0,118,11,1,0,0,0,119,120,3,6,3,0,120,125,3,14,7,0,121,
  	122,5,2,0,0,122,124,3,14,7,0,123,121,1,0,0,0,124,127,1,0,0,0,125,123,
  	1,0,0,0,125,126,1,0,0,0,126,128,1,0,0,0,127,125,1,0,0,0,128,129,5,3,0,
  	0,129,13,1,0,0,0,130,136,5,35,0,0,131,132,5,7,0,0,132,133,5,36,0,0,133,
  	135,5,8,0,0,134,131,1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,136,137,1,
  	0,0,0,137,141,1,0,0,0,138,136,1,0,0,0,139,140,5,9,0,0,140,142,3,10,5,
  	0,141,139,1,0,0,0,141,142,1,0,0,0,142,15,1,0,0,0,143,144,3,18,9,0,144,
  	145,5,35,0,0,145,147,5,12,0,0,146,148,3,20,10,0,147,146,1,0,0,0,147,148,
  	1,0,0,0,148,149,1,0,0,0,149,150,5,13,0,0,150,151,3,24,12,0,151,17,1,0,
  	0,0,152,153,7,1,0,0,153,19,1,0,0,0,154,159,3,22,11,0,155,156,5,2,0,0,
  	156,158,3,22,11,0,157,155,1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,159,
  	160,1,0,0,0,160,21,1,0,0,0,161,159,1,0,0,0,162,163,3,6,3,0,163,177,5,
  	35,0,0,164,166,5,7,0,0,165,167,5,36,0,0,166,165,1,0,0,0,166,167,1,0,0,
  	0,167,168,1,0,0,0,168,174,5,8,0,0,169,170,5,7,0,0,170,171,5,36,0,0,171,
  	173,5,8,0,0,172,169,1,0,0,0,173,176,1,0,0,0,174,172,1,0,0,0,174,175,1,
  	0,0,0,175,178,1,0,0,0,176,174,1,0,0,0,177,164,1,0,0,0,177,178,1,0,0,0,
  	178,23,1,0,0,0,179,183,5,10,0,0,180,182,3,26,13,0,181,180,1,0,0,0,182,
  	185,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,186,1,0,0,0,185,183,1,
  	0,0,0,186,187,5,11,0,0,187,25,1,0,0,0,188,191,3,2,1,0,189,191,3,28,14,
  	0,190,188,1,0,0,0,190,189,1,0,0,0,191,27,1,0,0,0,192,193,3,36,18,0,193,
  	194,5,9,0,0,194,195,3,30,15,0,195,196,5,3,0,0,196,226,1,0,0,0,197,199,
  	3,30,15,0,198,197,1,0,0,0,198,199,1,0,0,0,199,200,1,0,0,0,200,226,5,3,
  	0,0,201,226,3,24,12,0,202,204,5,15,0,0,203,205,3,30,15,0,204,203,1,0,
  	0,0,204,205,1,0,0,0,205,226,1,0,0,0,206,207,5,16,0,0,207,208,5,12,0,0,
  	208,209,3,34,17,0,209,210,5,13,0,0,210,213,3,28,14,0,211,212,5,17,0,0,
  	212,214,3,28,14,0,213,211,1,0,0,0,213,214,1,0,0,0,214,226,1,0,0,0,215,
  	216,5,18,0,0,216,217,5,12,0,0,217,218,3,34,17,0,218,219,5,13,0,0,219,
  	220,3,28,14,0,220,226,1,0,0,0,221,222,5,19,0,0,222,226,5,3,0,0,223,224,
  	5,20,0,0,224,226,5,3,0,0,225,192,1,0,0,0,225,198,1,0,0,0,225,201,1,0,
  	0,0,225,202,1,0,0,0,225,206,1,0,0,0,225,215,1,0,0,0,225,221,1,0,0,0,225,
  	223,1,0,0,0,226,29,1,0,0,0,227,228,3,52,26,0,228,31,1,0,0,0,229,230,3,
  	38,19,0,230,33,1,0,0,0,231,232,3,66,33,0,232,35,1,0,0,0,233,240,5,35,
  	0,0,234,235,5,7,0,0,235,236,3,30,15,0,236,237,5,8,0,0,237,239,1,0,0,0,
  	238,234,1,0,0,0,239,242,1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,0,241,37,
  	1,0,0,0,242,240,1,0,0,0,243,244,7,2,0,0,244,39,1,0,0,0,245,250,3,30,15,
  	0,246,247,5,2,0,0,247,249,3,30,15,0,248,246,1,0,0,0,249,252,1,0,0,0,250,
  	248,1,0,0,0,250,251,1,0,0,0,251,41,1,0,0,0,252,250,1,0,0,0,253,254,5,
  	12,0,0,254,255,3,30,15,0,255,256,5,13,0,0,256,260,1,0,0,0,257,260,3,36,
  	18,0,258,260,3,38,19,0,259,253,1,0,0,0,259,257,1,0,0,0,259,258,1,0,0,
  	0,260,43,1,0,0,0,261,272,3,42,21,0,262,263,3,46,23,0,263,264,3,44,22,
  	0,264,272,1,0,0,0,265,266,5,35,0,0,266,268,5,12,0,0,267,269,3,40,20,0,
  	268,267,1,0,0,0,268,269,1,0,0,0,269,270,1,0,0,0,270,272,5,13,0,0,271,
  	261,1,0,0,0,271,262,1,0,0,0,271,265,1,0,0,0,272,45,1,0,0,0,273,274,7,
  	3,0,0,274,47,1,0,0,0,275,281,3,44,22,0,276,277,3,50,25,0,277,278,3,44,
  	22,0,278,280,1,0,0,0,279,276,1,0,0,0,280,283,1,0,0,0,281,279,1,0,0,0,
  	281,282,1,0,0,0,282,49,1,0,0,0,283,281,1,0,0,0,284,285,7,4,0,0,285,51,
  	1,0,0,0,286,292,3,48,24,0,287,288,3,54,27,0,288,289,3,48,24,0,289,291,
  	1,0,0,0,290,287,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,292,293,1,0,0,
  	0,293,53,1,0,0,0,294,292,1,0,0,0,295,296,7,5,0,0,296,55,1,0,0,0,297,303,
  	3,52,26,0,298,299,3,58,29,0,299,300,3,52,26,0,300,302,1,0,0,0,301,298,
  	1,0,0,0,302,305,1,0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,57,1,0,0,
  	0,305,303,1,0,0,0,306,307,7,6,0,0,307,59,1,0,0,0,308,314,3,56,28,0,309,
  	310,3,62,31,0,310,311,3,56,28,0,311,313,1,0,0,0,312,309,1,0,0,0,313,316,
  	1,0,0,0,314,312,1,0,0,0,314,315,1,0,0,0,315,61,1,0,0,0,316,314,1,0,0,
  	0,317,318,7,7,0,0,318,63,1,0,0,0,319,324,3,60,30,0,320,321,5,33,0,0,321,
  	323,3,60,30,0,322,320,1,0,0,0,323,326,1,0,0,0,324,322,1,0,0,0,324,325,
  	1,0,0,0,325,65,1,0,0,0,326,324,1,0,0,0,327,332,3,64,32,0,328,329,5,34,
  	0,0,329,331,3,64,32,0,330,328,1,0,0,0,331,334,1,0,0,0,332,330,1,0,0,0,
  	332,333,1,0,0,0,333,67,1,0,0,0,334,332,1,0,0,0,33,70,72,76,85,98,111,
  	114,117,125,136,141,147,159,166,174,177,183,190,198,204,213,225,240,250,
  	259,268,271,281,292,303,314,324,332
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cactParserStaticData = staticData.release();
}

}

CACTParser::CACTParser(TokenStream *input) : CACTParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CACTParser::CACTParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CACTParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cactParserStaticData->atn, cactParserStaticData->decisionToDFA, cactParserStaticData->sharedContextCache, options);
}

CACTParser::~CACTParser() {
  delete _interpreter;
}

const atn::ATN& CACTParser::getATN() const {
  return *cactParserStaticData->atn;
}

std::string CACTParser::getGrammarFileName() const {
  return "CACT.g4";
}

const std::vector<std::string>& CACTParser::getRuleNames() const {
  return cactParserStaticData->ruleNames;
}

const dfa::Vocabulary& CACTParser::getVocabulary() const {
  return cactParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CACTParser::getSerializedATN() const {
  return cactParserStaticData->serializedATN;
}


//----------------- CompUnitContext ------------------------------------------------------------------

CACTParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::DeclContext *> CACTParser::CompUnitContext::decl() {
  return getRuleContexts<CACTParser::DeclContext>();
}

CACTParser::DeclContext* CACTParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<CACTParser::DeclContext>(i);
}

std::vector<CACTParser::FuncDefContext *> CACTParser::CompUnitContext::funcDef() {
  return getRuleContexts<CACTParser::FuncDefContext>();
}

CACTParser::FuncDefContext* CACTParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<CACTParser::FuncDefContext>(i);
}


size_t CACTParser::CompUnitContext::getRuleIndex() const {
  return CACTParser::RuleCompUnit;
}

void CACTParser::CompUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompUnit(this);
}

void CACTParser::CompUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompUnit(this);
}


std::any CACTParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::CompUnitContext* CACTParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, CACTParser::RuleCompUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(70);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(68);
        decl();
        break;
      }

      case 2: {
        setState(69);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(72); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16498) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

CACTParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::ConstDeclContext* CACTParser::DeclContext::constDecl() {
  return getRuleContext<CACTParser::ConstDeclContext>(0);
}

CACTParser::VarDeclContext* CACTParser::DeclContext::varDecl() {
  return getRuleContext<CACTParser::VarDeclContext>(0);
}


size_t CACTParser::DeclContext::getRuleIndex() const {
  return CACTParser::RuleDecl;
}

void CACTParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void CACTParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


std::any CACTParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::DeclContext* CACTParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, CACTParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        constDecl();
        break;
      }

      case CACTParser::T__3:
      case CACTParser::T__4:
      case CACTParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(75);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclContext ------------------------------------------------------------------

CACTParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::BTypeContext* CACTParser::ConstDeclContext::bType() {
  return getRuleContext<CACTParser::BTypeContext>(0);
}

std::vector<CACTParser::ConstDefContext *> CACTParser::ConstDeclContext::constDef() {
  return getRuleContexts<CACTParser::ConstDefContext>();
}

CACTParser::ConstDefContext* CACTParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<CACTParser::ConstDefContext>(i);
}


size_t CACTParser::ConstDeclContext::getRuleIndex() const {
  return CACTParser::RuleConstDecl;
}

void CACTParser::ConstDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDecl(this);
}

void CACTParser::ConstDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDecl(this);
}


std::any CACTParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstDeclContext* CACTParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, CACTParser::RuleConstDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(CACTParser::T__0);
    setState(79);
    bType();
    setState(80);
    constDef();
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__1) {
      setState(81);
      match(CACTParser::T__1);
      setState(82);
      constDef();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(CACTParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

CACTParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::BTypeContext::getRuleIndex() const {
  return CACTParser::RuleBType;
}

void CACTParser::BTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBType(this);
}

void CACTParser::BTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBType(this);
}


std::any CACTParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::BTypeContext* CACTParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, CACTParser::RuleBType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 112) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

CACTParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::ConstDefContext::IDENT() {
  return getToken(CACTParser::IDENT, 0);
}

CACTParser::ConstInitValContext* CACTParser::ConstDefContext::constInitVal() {
  return getRuleContext<CACTParser::ConstInitValContext>(0);
}

std::vector<tree::TerminalNode *> CACTParser::ConstDefContext::IntConst() {
  return getTokens(CACTParser::IntConst);
}

tree::TerminalNode* CACTParser::ConstDefContext::IntConst(size_t i) {
  return getToken(CACTParser::IntConst, i);
}


size_t CACTParser::ConstDefContext::getRuleIndex() const {
  return CACTParser::RuleConstDef;
}

void CACTParser::ConstDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDef(this);
}

void CACTParser::ConstDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDef(this);
}


std::any CACTParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstDefContext* CACTParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 8, CACTParser::RuleConstDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(CACTParser::IDENT);
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__6) {
      setState(93);
      match(CACTParser::T__6);
      setState(94);
      match(CACTParser::IntConst);
      setState(95);
      match(CACTParser::T__7);
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(101);
    match(CACTParser::T__8);
    setState(102);
    constInitVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValContext ------------------------------------------------------------------

CACTParser::ConstInitValContext::ConstInitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::ConstExpContext* CACTParser::ConstInitValContext::constExp() {
  return getRuleContext<CACTParser::ConstExpContext>(0);
}

std::vector<CACTParser::ConstInitValContext *> CACTParser::ConstInitValContext::constInitVal() {
  return getRuleContexts<CACTParser::ConstInitValContext>();
}

CACTParser::ConstInitValContext* CACTParser::ConstInitValContext::constInitVal(size_t i) {
  return getRuleContext<CACTParser::ConstInitValContext>(i);
}


size_t CACTParser::ConstInitValContext::getRuleIndex() const {
  return CACTParser::RuleConstInitVal;
}

void CACTParser::ConstInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstInitVal(this);
}

void CACTParser::ConstInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstInitVal(this);
}


std::any CACTParser::ConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstInitVal(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstInitValContext* CACTParser::constInitVal() {
  ConstInitValContext *_localctx = _tracker.createInstance<ConstInitValContext>(_ctx, getState());
  enterRule(_localctx, 10, CACTParser::RuleConstInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::IntConst:
      case CACTParser::FloatConst:
      case CACTParser::CharConst: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        constExp();
        break;
      }

      case CACTParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(CACTParser::T__9);
        setState(114);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 481036338176) != 0)) {
          setState(106);
          constInitVal();
          setState(111);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == CACTParser::T__1) {
            setState(107);
            match(CACTParser::T__1);
            setState(108);
            constInitVal();
            setState(113);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(116);
        match(CACTParser::T__10);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

CACTParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::BTypeContext* CACTParser::VarDeclContext::bType() {
  return getRuleContext<CACTParser::BTypeContext>(0);
}

std::vector<CACTParser::VarDefContext *> CACTParser::VarDeclContext::varDef() {
  return getRuleContexts<CACTParser::VarDefContext>();
}

CACTParser::VarDefContext* CACTParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<CACTParser::VarDefContext>(i);
}


size_t CACTParser::VarDeclContext::getRuleIndex() const {
  return CACTParser::RuleVarDecl;
}

void CACTParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void CACTParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


std::any CACTParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::VarDeclContext* CACTParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, CACTParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    bType();
    setState(120);
    varDef();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__1) {
      setState(121);
      match(CACTParser::T__1);
      setState(122);
      varDef();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
    match(CACTParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

CACTParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::VarDefContext::IDENT() {
  return getToken(CACTParser::IDENT, 0);
}

std::vector<tree::TerminalNode *> CACTParser::VarDefContext::IntConst() {
  return getTokens(CACTParser::IntConst);
}

tree::TerminalNode* CACTParser::VarDefContext::IntConst(size_t i) {
  return getToken(CACTParser::IntConst, i);
}

CACTParser::ConstInitValContext* CACTParser::VarDefContext::constInitVal() {
  return getRuleContext<CACTParser::ConstInitValContext>(0);
}


size_t CACTParser::VarDefContext::getRuleIndex() const {
  return CACTParser::RuleVarDef;
}

void CACTParser::VarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDef(this);
}

void CACTParser::VarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDef(this);
}


std::any CACTParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::VarDefContext* CACTParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 14, CACTParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(CACTParser::IDENT);
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__6) {
      setState(131);
      match(CACTParser::T__6);
      setState(132);
      match(CACTParser::IntConst);
      setState(133);
      match(CACTParser::T__7);
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::T__8) {
      setState(139);
      match(CACTParser::T__8);
      setState(140);
      constInitVal();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

CACTParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::FuncTypeContext* CACTParser::FuncDefContext::funcType() {
  return getRuleContext<CACTParser::FuncTypeContext>(0);
}

tree::TerminalNode* CACTParser::FuncDefContext::IDENT() {
  return getToken(CACTParser::IDENT, 0);
}

CACTParser::BlockContext* CACTParser::FuncDefContext::block() {
  return getRuleContext<CACTParser::BlockContext>(0);
}

CACTParser::FuncFParamsContext* CACTParser::FuncDefContext::funcFParams() {
  return getRuleContext<CACTParser::FuncFParamsContext>(0);
}


size_t CACTParser::FuncDefContext::getRuleIndex() const {
  return CACTParser::RuleFuncDef;
}

void CACTParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void CACTParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}


std::any CACTParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FuncDefContext* CACTParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 16, CACTParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    funcType();
    setState(144);
    match(CACTParser::IDENT);
    setState(145);
    match(CACTParser::T__11);
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 112) != 0)) {
      setState(146);
      funcFParams();
    }
    setState(149);
    match(CACTParser::T__12);
    setState(150);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

CACTParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::FuncTypeContext::getRuleIndex() const {
  return CACTParser::RuleFuncType;
}

void CACTParser::FuncTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncType(this);
}

void CACTParser::FuncTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncType(this);
}


std::any CACTParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FuncTypeContext* CACTParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 18, CACTParser::RuleFuncType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16496) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamsContext ------------------------------------------------------------------

CACTParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::FuncFParamContext *> CACTParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<CACTParser::FuncFParamContext>();
}

CACTParser::FuncFParamContext* CACTParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<CACTParser::FuncFParamContext>(i);
}


size_t CACTParser::FuncFParamsContext::getRuleIndex() const {
  return CACTParser::RuleFuncFParams;
}

void CACTParser::FuncFParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncFParams(this);
}

void CACTParser::FuncFParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncFParams(this);
}


std::any CACTParser::FuncFParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFuncFParams(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FuncFParamsContext* CACTParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 20, CACTParser::RuleFuncFParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    funcFParam();
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__1) {
      setState(155);
      match(CACTParser::T__1);
      setState(156);
      funcFParam();
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamContext ------------------------------------------------------------------

CACTParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::BTypeContext* CACTParser::FuncFParamContext::bType() {
  return getRuleContext<CACTParser::BTypeContext>(0);
}

tree::TerminalNode* CACTParser::FuncFParamContext::IDENT() {
  return getToken(CACTParser::IDENT, 0);
}

std::vector<tree::TerminalNode *> CACTParser::FuncFParamContext::IntConst() {
  return getTokens(CACTParser::IntConst);
}

tree::TerminalNode* CACTParser::FuncFParamContext::IntConst(size_t i) {
  return getToken(CACTParser::IntConst, i);
}


size_t CACTParser::FuncFParamContext::getRuleIndex() const {
  return CACTParser::RuleFuncFParam;
}

void CACTParser::FuncFParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncFParam(this);
}

void CACTParser::FuncFParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncFParam(this);
}


std::any CACTParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FuncFParamContext* CACTParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 22, CACTParser::RuleFuncFParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    bType();
    setState(163);
    match(CACTParser::IDENT);
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::T__6) {
      setState(164);
      match(CACTParser::T__6);
      setState(166);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CACTParser::IntConst) {
        setState(165);
        match(CACTParser::IntConst);
      }
      setState(168);
      match(CACTParser::T__7);
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CACTParser::T__6) {
        setState(169);
        match(CACTParser::T__6);
        setState(170);
        match(CACTParser::IntConst);
        setState(171);
        match(CACTParser::T__7);
        setState(176);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

CACTParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::BlockItemContext *> CACTParser::BlockContext::blockItem() {
  return getRuleContexts<CACTParser::BlockItemContext>();
}

CACTParser::BlockItemContext* CACTParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<CACTParser::BlockItemContext>(i);
}


size_t CACTParser::BlockContext::getRuleIndex() const {
  return CACTParser::RuleBlock;
}

void CACTParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void CACTParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any CACTParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::BlockContext* CACTParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 24, CACTParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(CACTParser::T__9);
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 515412694138) != 0)) {
      setState(180);
      blockItem();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(186);
    match(CACTParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

CACTParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::DeclContext* CACTParser::BlockItemContext::decl() {
  return getRuleContext<CACTParser::DeclContext>(0);
}

CACTParser::StmtContext* CACTParser::BlockItemContext::stmt() {
  return getRuleContext<CACTParser::StmtContext>(0);
}


size_t CACTParser::BlockItemContext::getRuleIndex() const {
  return CACTParser::RuleBlockItem;
}

void CACTParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void CACTParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


std::any CACTParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::BlockItemContext* CACTParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 26, CACTParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::T__0:
      case CACTParser::T__3:
      case CACTParser::T__4:
      case CACTParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(188);
        decl();
        break;
      }

      case CACTParser::T__2:
      case CACTParser::T__9:
      case CACTParser::T__11:
      case CACTParser::T__14:
      case CACTParser::T__15:
      case CACTParser::T__17:
      case CACTParser::T__18:
      case CACTParser::T__19:
      case CACTParser::T__20:
      case CACTParser::T__21:
      case CACTParser::T__22:
      case CACTParser::IDENT:
      case CACTParser::IntConst:
      case CACTParser::FloatConst:
      case CACTParser::CharConst: {
        enterOuterAlt(_localctx, 2);
        setState(189);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

CACTParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::LValContext* CACTParser::StmtContext::lVal() {
  return getRuleContext<CACTParser::LValContext>(0);
}

CACTParser::ExpContext* CACTParser::StmtContext::exp() {
  return getRuleContext<CACTParser::ExpContext>(0);
}

CACTParser::BlockContext* CACTParser::StmtContext::block() {
  return getRuleContext<CACTParser::BlockContext>(0);
}

CACTParser::CondContext* CACTParser::StmtContext::cond() {
  return getRuleContext<CACTParser::CondContext>(0);
}

std::vector<CACTParser::StmtContext *> CACTParser::StmtContext::stmt() {
  return getRuleContexts<CACTParser::StmtContext>();
}

CACTParser::StmtContext* CACTParser::StmtContext::stmt(size_t i) {
  return getRuleContext<CACTParser::StmtContext>(i);
}


size_t CACTParser::StmtContext::getRuleIndex() const {
  return CACTParser::RuleStmt;
}

void CACTParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void CACTParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


std::any CACTParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::StmtContext* CACTParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 28, CACTParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      lVal();
      setState(193);
      match(CACTParser::T__8);
      setState(194);
      exp();
      setState(195);
      match(CACTParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 515410759680) != 0)) {
        setState(197);
        exp();
      }
      setState(200);
      match(CACTParser::T__2);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(201);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(202);
      match(CACTParser::T__14);
      setState(204);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(203);
        exp();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(206);
      match(CACTParser::T__15);
      setState(207);
      match(CACTParser::T__11);
      setState(208);
      cond();
      setState(209);
      match(CACTParser::T__12);
      setState(210);
      stmt();
      setState(213);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(211);
        match(CACTParser::T__16);
        setState(212);
        stmt();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(215);
      match(CACTParser::T__17);
      setState(216);
      match(CACTParser::T__11);
      setState(217);
      cond();
      setState(218);
      match(CACTParser::T__12);
      setState(219);
      stmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(221);
      match(CACTParser::T__18);
      setState(222);
      match(CACTParser::T__2);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(223);
      match(CACTParser::T__19);
      setState(224);
      match(CACTParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

CACTParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::AddExpContext* CACTParser::ExpContext::addExp() {
  return getRuleContext<CACTParser::AddExpContext>(0);
}


size_t CACTParser::ExpContext::getRuleIndex() const {
  return CACTParser::RuleExp;
}

void CACTParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void CACTParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


std::any CACTParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ExpContext* CACTParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 30, CACTParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    addExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstExpContext ------------------------------------------------------------------

CACTParser::ConstExpContext::ConstExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::NumberContext* CACTParser::ConstExpContext::number() {
  return getRuleContext<CACTParser::NumberContext>(0);
}


size_t CACTParser::ConstExpContext::getRuleIndex() const {
  return CACTParser::RuleConstExp;
}

void CACTParser::ConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExp(this);
}

void CACTParser::ConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExp(this);
}


std::any CACTParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstExpContext* CACTParser::constExp() {
  ConstExpContext *_localctx = _tracker.createInstance<ConstExpContext>(_ctx, getState());
  enterRule(_localctx, 32, CACTParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

CACTParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::LOrExpContext* CACTParser::CondContext::lOrExp() {
  return getRuleContext<CACTParser::LOrExpContext>(0);
}


size_t CACTParser::CondContext::getRuleIndex() const {
  return CACTParser::RuleCond;
}

void CACTParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void CACTParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}


std::any CACTParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::CondContext* CACTParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 34, CACTParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    lOrExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

CACTParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::LValContext::IDENT() {
  return getToken(CACTParser::IDENT, 0);
}

std::vector<CACTParser::ExpContext *> CACTParser::LValContext::exp() {
  return getRuleContexts<CACTParser::ExpContext>();
}

CACTParser::ExpContext* CACTParser::LValContext::exp(size_t i) {
  return getRuleContext<CACTParser::ExpContext>(i);
}


size_t CACTParser::LValContext::getRuleIndex() const {
  return CACTParser::RuleLVal;
}

void CACTParser::LValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLVal(this);
}

void CACTParser::LValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLVal(this);
}


std::any CACTParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::LValContext* CACTParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 36, CACTParser::RuleLVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(CACTParser::IDENT);
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__6) {
      setState(234);
      match(CACTParser::T__6);
      setState(235);
      exp();
      setState(236);
      match(CACTParser::T__7);
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

CACTParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::NumberContext::IntConst() {
  return getToken(CACTParser::IntConst, 0);
}

tree::TerminalNode* CACTParser::NumberContext::CharConst() {
  return getToken(CACTParser::CharConst, 0);
}

tree::TerminalNode* CACTParser::NumberContext::FloatConst() {
  return getToken(CACTParser::FloatConst, 0);
}


size_t CACTParser::NumberContext::getRuleIndex() const {
  return CACTParser::RuleNumber;
}

void CACTParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void CACTParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


std::any CACTParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::NumberContext* CACTParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 38, CACTParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 481036337152) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamsContext ------------------------------------------------------------------

CACTParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::ExpContext *> CACTParser::FuncRParamsContext::exp() {
  return getRuleContexts<CACTParser::ExpContext>();
}

CACTParser::ExpContext* CACTParser::FuncRParamsContext::exp(size_t i) {
  return getRuleContext<CACTParser::ExpContext>(i);
}


size_t CACTParser::FuncRParamsContext::getRuleIndex() const {
  return CACTParser::RuleFuncRParams;
}

void CACTParser::FuncRParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncRParams(this);
}

void CACTParser::FuncRParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncRParams(this);
}


std::any CACTParser::FuncRParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFuncRParams(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FuncRParamsContext* CACTParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 40, CACTParser::RuleFuncRParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    exp();
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__1) {
      setState(246);
      match(CACTParser::T__1);
      setState(247);
      exp();
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

CACTParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::ExpContext* CACTParser::PrimaryExpContext::exp() {
  return getRuleContext<CACTParser::ExpContext>(0);
}

CACTParser::LValContext* CACTParser::PrimaryExpContext::lVal() {
  return getRuleContext<CACTParser::LValContext>(0);
}

CACTParser::NumberContext* CACTParser::PrimaryExpContext::number() {
  return getRuleContext<CACTParser::NumberContext>(0);
}


size_t CACTParser::PrimaryExpContext::getRuleIndex() const {
  return CACTParser::RulePrimaryExp;
}

void CACTParser::PrimaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExp(this);
}

void CACTParser::PrimaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExp(this);
}


std::any CACTParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::PrimaryExpContext* CACTParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 42, CACTParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(253);
        match(CACTParser::T__11);
        setState(254);
        exp();
        setState(255);
        match(CACTParser::T__12);
        break;
      }

      case CACTParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(257);
        lVal();
        break;
      }

      case CACTParser::IntConst:
      case CACTParser::FloatConst:
      case CACTParser::CharConst: {
        enterOuterAlt(_localctx, 3);
        setState(258);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

CACTParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::PrimaryExpContext* CACTParser::UnaryExpContext::primaryExp() {
  return getRuleContext<CACTParser::PrimaryExpContext>(0);
}

CACTParser::UnaryOpContext* CACTParser::UnaryExpContext::unaryOp() {
  return getRuleContext<CACTParser::UnaryOpContext>(0);
}

CACTParser::UnaryExpContext* CACTParser::UnaryExpContext::unaryExp() {
  return getRuleContext<CACTParser::UnaryExpContext>(0);
}

tree::TerminalNode* CACTParser::UnaryExpContext::IDENT() {
  return getToken(CACTParser::IDENT, 0);
}

CACTParser::FuncRParamsContext* CACTParser::UnaryExpContext::funcRParams() {
  return getRuleContext<CACTParser::FuncRParamsContext>(0);
}


size_t CACTParser::UnaryExpContext::getRuleIndex() const {
  return CACTParser::RuleUnaryExp;
}

void CACTParser::UnaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExp(this);
}

void CACTParser::UnaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExp(this);
}


std::any CACTParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::UnaryExpContext* CACTParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 44, CACTParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(261);
      primaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262);
      unaryOp();
      setState(263);
      unaryExp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(265);
      match(CACTParser::IDENT);
      setState(266);
      match(CACTParser::T__11);
      setState(268);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 515410759680) != 0)) {
        setState(267);
        funcRParams();
      }
      setState(270);
      match(CACTParser::T__12);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOpContext ------------------------------------------------------------------

CACTParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::UnaryOpContext::getRuleIndex() const {
  return CACTParser::RuleUnaryOp;
}

void CACTParser::UnaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOp(this);
}

void CACTParser::UnaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOp(this);
}


std::any CACTParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::UnaryOpContext* CACTParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 46, CACTParser::RuleUnaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14680064) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

CACTParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::UnaryExpContext *> CACTParser::MulExpContext::unaryExp() {
  return getRuleContexts<CACTParser::UnaryExpContext>();
}

CACTParser::UnaryExpContext* CACTParser::MulExpContext::unaryExp(size_t i) {
  return getRuleContext<CACTParser::UnaryExpContext>(i);
}

std::vector<CACTParser::MulOpContext *> CACTParser::MulExpContext::mulOp() {
  return getRuleContexts<CACTParser::MulOpContext>();
}

CACTParser::MulOpContext* CACTParser::MulExpContext::mulOp(size_t i) {
  return getRuleContext<CACTParser::MulOpContext>(i);
}


size_t CACTParser::MulExpContext::getRuleIndex() const {
  return CACTParser::RuleMulExp;
}

void CACTParser::MulExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulExp(this);
}

void CACTParser::MulExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulExp(this);
}


std::any CACTParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::MulExpContext* CACTParser::mulExp() {
  MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, getState());
  enterRule(_localctx, 48, CACTParser::RuleMulExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    unaryExp();
    setState(281);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 117440512) != 0)) {
      setState(276);
      mulOp();
      setState(277);
      unaryExp();
      setState(283);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulOpContext ------------------------------------------------------------------

CACTParser::MulOpContext::MulOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::MulOpContext::getRuleIndex() const {
  return CACTParser::RuleMulOp;
}

void CACTParser::MulOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulOp(this);
}

void CACTParser::MulOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulOp(this);
}


std::any CACTParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::MulOpContext* CACTParser::mulOp() {
  MulOpContext *_localctx = _tracker.createInstance<MulOpContext>(_ctx, getState());
  enterRule(_localctx, 50, CACTParser::RuleMulOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 117440512) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

CACTParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::MulExpContext *> CACTParser::AddExpContext::mulExp() {
  return getRuleContexts<CACTParser::MulExpContext>();
}

CACTParser::MulExpContext* CACTParser::AddExpContext::mulExp(size_t i) {
  return getRuleContext<CACTParser::MulExpContext>(i);
}

std::vector<CACTParser::AddOpContext *> CACTParser::AddExpContext::addOp() {
  return getRuleContexts<CACTParser::AddOpContext>();
}

CACTParser::AddOpContext* CACTParser::AddExpContext::addOp(size_t i) {
  return getRuleContext<CACTParser::AddOpContext>(i);
}


size_t CACTParser::AddExpContext::getRuleIndex() const {
  return CACTParser::RuleAddExp;
}

void CACTParser::AddExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExp(this);
}

void CACTParser::AddExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExp(this);
}


std::any CACTParser::AddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitAddExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::AddExpContext* CACTParser::addExp() {
  AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, getState());
  enterRule(_localctx, 52, CACTParser::RuleAddExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(286);
    mulExp();
    setState(292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(287);
        addOp();
        setState(288);
        mulExp(); 
      }
      setState(294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

CACTParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::AddOpContext::getRuleIndex() const {
  return CACTParser::RuleAddOp;
}

void CACTParser::AddOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOp(this);
}

void CACTParser::AddOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOp(this);
}


std::any CACTParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::AddOpContext* CACTParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 54, CACTParser::RuleAddOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    _la = _input->LA(1);
    if (!(_la == CACTParser::T__20

    || _la == CACTParser::T__21)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

CACTParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::AddExpContext *> CACTParser::RelExpContext::addExp() {
  return getRuleContexts<CACTParser::AddExpContext>();
}

CACTParser::AddExpContext* CACTParser::RelExpContext::addExp(size_t i) {
  return getRuleContext<CACTParser::AddExpContext>(i);
}

std::vector<CACTParser::RelOpContext *> CACTParser::RelExpContext::relOp() {
  return getRuleContexts<CACTParser::RelOpContext>();
}

CACTParser::RelOpContext* CACTParser::RelExpContext::relOp(size_t i) {
  return getRuleContext<CACTParser::RelOpContext>(i);
}


size_t CACTParser::RelExpContext::getRuleIndex() const {
  return CACTParser::RuleRelExp;
}

void CACTParser::RelExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelExp(this);
}

void CACTParser::RelExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelExp(this);
}


std::any CACTParser::RelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitRelExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::RelExpContext* CACTParser::relExp() {
  RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, getState());
  enterRule(_localctx, 56, CACTParser::RuleRelExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    addExp();
    setState(303);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2013265920) != 0)) {
      setState(298);
      relOp();
      setState(299);
      addExp();
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

CACTParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::RelOpContext::getRuleIndex() const {
  return CACTParser::RuleRelOp;
}

void CACTParser::RelOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelOp(this);
}

void CACTParser::RelOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelOp(this);
}


std::any CACTParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::RelOpContext* CACTParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 58, CACTParser::RuleRelOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2013265920) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqExpContext ------------------------------------------------------------------

CACTParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::RelExpContext *> CACTParser::EqExpContext::relExp() {
  return getRuleContexts<CACTParser::RelExpContext>();
}

CACTParser::RelExpContext* CACTParser::EqExpContext::relExp(size_t i) {
  return getRuleContext<CACTParser::RelExpContext>(i);
}

std::vector<CACTParser::EqOpContext *> CACTParser::EqExpContext::eqOp() {
  return getRuleContexts<CACTParser::EqOpContext>();
}

CACTParser::EqOpContext* CACTParser::EqExpContext::eqOp(size_t i) {
  return getRuleContext<CACTParser::EqOpContext>(i);
}


size_t CACTParser::EqExpContext::getRuleIndex() const {
  return CACTParser::RuleEqExp;
}

void CACTParser::EqExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqExp(this);
}

void CACTParser::EqExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqExp(this);
}


std::any CACTParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitEqExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::EqExpContext* CACTParser::eqExp() {
  EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, getState());
  enterRule(_localctx, 60, CACTParser::RuleEqExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    relExp();
    setState(314);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__30

    || _la == CACTParser::T__31) {
      setState(309);
      eqOp();
      setState(310);
      relExp();
      setState(316);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqOpContext ------------------------------------------------------------------

CACTParser::EqOpContext::EqOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::EqOpContext::getRuleIndex() const {
  return CACTParser::RuleEqOp;
}

void CACTParser::EqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqOp(this);
}

void CACTParser::EqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqOp(this);
}


std::any CACTParser::EqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitEqOp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::EqOpContext* CACTParser::eqOp() {
  EqOpContext *_localctx = _tracker.createInstance<EqOpContext>(_ctx, getState());
  enterRule(_localctx, 62, CACTParser::RuleEqOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    _la = _input->LA(1);
    if (!(_la == CACTParser::T__30

    || _la == CACTParser::T__31)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LAndExpContext ------------------------------------------------------------------

CACTParser::LAndExpContext::LAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::EqExpContext *> CACTParser::LAndExpContext::eqExp() {
  return getRuleContexts<CACTParser::EqExpContext>();
}

CACTParser::EqExpContext* CACTParser::LAndExpContext::eqExp(size_t i) {
  return getRuleContext<CACTParser::EqExpContext>(i);
}


size_t CACTParser::LAndExpContext::getRuleIndex() const {
  return CACTParser::RuleLAndExp;
}

void CACTParser::LAndExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLAndExp(this);
}

void CACTParser::LAndExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLAndExp(this);
}


std::any CACTParser::LAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitLAndExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::LAndExpContext* CACTParser::lAndExp() {
  LAndExpContext *_localctx = _tracker.createInstance<LAndExpContext>(_ctx, getState());
  enterRule(_localctx, 64, CACTParser::RuleLAndExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    eqExp();
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__32) {
      setState(320);
      match(CACTParser::T__32);
      setState(321);
      eqExp();
      setState(326);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LOrExpContext ------------------------------------------------------------------

CACTParser::LOrExpContext::LOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::LAndExpContext *> CACTParser::LOrExpContext::lAndExp() {
  return getRuleContexts<CACTParser::LAndExpContext>();
}

CACTParser::LAndExpContext* CACTParser::LOrExpContext::lAndExp(size_t i) {
  return getRuleContext<CACTParser::LAndExpContext>(i);
}


size_t CACTParser::LOrExpContext::getRuleIndex() const {
  return CACTParser::RuleLOrExp;
}

void CACTParser::LOrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLOrExp(this);
}

void CACTParser::LOrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CACTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLOrExp(this);
}


std::any CACTParser::LOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitLOrExp(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::LOrExpContext* CACTParser::lOrExp() {
  LOrExpContext *_localctx = _tracker.createInstance<LOrExpContext>(_ctx, getState());
  enterRule(_localctx, 66, CACTParser::RuleLOrExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    lAndExp();
    setState(332);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__33) {
      setState(328);
      match(CACTParser::T__33);
      setState(329);
      lAndExp();
      setState(334);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CACTParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cactParserInitialize();
#else
  ::antlr4::internal::call_once(cactParserOnceFlag, cactParserInitialize);
#endif
}
