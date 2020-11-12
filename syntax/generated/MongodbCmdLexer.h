
// Generated from MongodbCmdLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace mongodbcmd {


class  MongodbCmdLexer : public antlr4::Lexer {
public:
  enum {
    M_E = 1, M_TRUE = 2, M_FALSE = 3, M_NEW = 4, M_FUNCTION = 5, RUNCOMMAND = 6, 
    ADMINCOMMAND = 7, M_USE = 8, UNSIGNED_INTEGER = 9, APPROXIMATE_NUM = 10, 
    MONGO_OPERATORS = 11, IDENTIFIER = 12, ID_START_WITH_UNDERLINE = 13, 
    M_STRINGS = 14, BACK_SLASH_STRINGS = 15, REGEX_STRINGS = 16, DOT = 17, 
    DOLLAR = 18, UNDERLINE = 19, COLON = 20, LPAREN = 21, RPAREN = 22, LBRACKET = 23, 
    RBRACKET = 24, LBRACE = 25, RBRACE = 26, COMMA = 27, SEMI = 28, PLUS = 29, 
    MINUS = 30, MULTI = 31, DIV = 32, GT = 33, LT = 34, EQ = 35, GE = 36, 
    LE = 37, NE = 38, AND = 39, OR = 40, NOT = 41, XOR = 42, INVERT = 43, 
    LSHIFT = 44, RSHIFT = 45, SPACES = 46
  };

  MongodbCmdLexer(antlr4::CharStream *input);
  ~MongodbCmdLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace mongodbcmd
