
// Generated from MongodbCmdParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace mongodbcmd {


class  MongodbCmdParser : public antlr4::Parser {
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

  enum {
    RuleStmt = 0, RuleCommand_function = 1, RuleUse_stmt = 2, RuleDb_name = 3, 
    RuleFunction_name = 4, RuleArguments = 5, RuleMarray = 6, RuleMlist = 7, 
    RuleKey_value = 8, RuleMkey = 9, RuleMvalue = 10, RuleScientific_num = 11, 
    RuleFunction_call = 12, RuleFunc_args = 13, RuleFunc_arg = 14, RuleJs_stmts = 15, 
    RuleJs_function_body = 16, RuleGeneral_expression = 17, RuleRelational_expression = 18, 
    RuleRelational_operator = 19, RuleBinary_expression = 20, RuleBinary_operator = 21, 
    RuleUnary_expression = 22, RuleConstant = 23
  };

  MongodbCmdParser(antlr4::TokenStream *input);
  ~MongodbCmdParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StmtContext;
  class Command_functionContext;
  class Use_stmtContext;
  class Db_nameContext;
  class Function_nameContext;
  class ArgumentsContext;
  class MarrayContext;
  class MlistContext;
  class Key_valueContext;
  class MkeyContext;
  class MvalueContext;
  class Scientific_numContext;
  class Function_callContext;
  class Func_argsContext;
  class Func_argContext;
  class Js_stmtsContext;
  class Js_function_bodyContext;
  class General_expressionContext;
  class Relational_expressionContext;
  class Relational_operatorContext;
  class Binary_expressionContext;
  class Binary_operatorContext;
  class Unary_expressionContext;
  class ConstantContext; 

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Db_nameContext *db_name();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Command_functionContext *command_function();
    antlr4::tree::TerminalNode *LPAREN();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Function_callContext *> function_call();
    Function_callContext* function_call(size_t i);
    Use_stmtContext *use_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Command_functionContext : public antlr4::ParserRuleContext {
  public:
    Command_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RUNCOMMAND();
    antlr4::tree::TerminalNode *ADMINCOMMAND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Command_functionContext* command_function();

  class  Use_stmtContext : public antlr4::ParserRuleContext {
  public:
    Use_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *M_USE();
    Db_nameContext *db_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_stmtContext* use_stmt();

  class  Db_nameContext : public antlr4::ParserRuleContext {
  public:
    Db_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_nameContext* db_name();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ID_START_WITH_UNDERLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MlistContext *mlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  MarrayContext : public antlr4::ParserRuleContext {
  public:
    MarrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    std::vector<MvalueContext *> mvalue();
    MvalueContext* mvalue(size_t i);
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MarrayContext* marray();

  class  MlistContext : public antlr4::ParserRuleContext {
  public:
    MlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<Key_valueContext *> key_value();
    Key_valueContext* key_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MlistContext* mlist();

  class  Key_valueContext : public antlr4::ParserRuleContext {
  public:
    Key_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MkeyContext *mkey();
    antlr4::tree::TerminalNode *COLON();
    MvalueContext *mvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_valueContext* key_value();

  class  MkeyContext : public antlr4::ParserRuleContext {
  public:
    MkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ID_START_WITH_UNDERLINE();
    antlr4::tree::TerminalNode *M_STRINGS();
    antlr4::tree::TerminalNode *MONGO_OPERATORS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MkeyContext* mkey();

  class  MvalueContext : public antlr4::ParserRuleContext {
  public:
    MvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scientific_numContext *scientific_num();
    antlr4::tree::TerminalNode *M_STRINGS();
    antlr4::tree::TerminalNode *UNSIGNED_INTEGER();
    MarrayContext *marray();
    MlistContext *mlist();
    antlr4::tree::TerminalNode *REGEX_STRINGS();
    antlr4::tree::TerminalNode *M_TRUE();
    antlr4::tree::TerminalNode *M_FALSE();
    Function_callContext *function_call();
    Js_stmtsContext *js_stmts();
    General_expressionContext *general_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MvalueContext* mvalue();

  class  Scientific_numContext : public antlr4::ParserRuleContext {
  public:
    Scientific_numContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *APPROXIMATE_NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scientific_numContext* scientific_num();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Func_argsContext *func_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Func_argsContext : public antlr4::ParserRuleContext {
  public:
    Func_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_argContext *> func_arg();
    Func_argContext* func_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_argsContext* func_args();

  class  Func_argContext : public antlr4::ParserRuleContext {
  public:
    Func_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ID_START_WITH_UNDERLINE();
    MvalueContext *mvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_argContext* func_arg();

  class  Js_stmtsContext : public antlr4::ParserRuleContext {
  public:
    Js_stmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *M_NEW();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *M_FUNCTION();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    Js_function_bodyContext *js_function_body();
    antlr4::tree::TerminalNode *RBRACE();
    Func_argsContext *func_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Js_stmtsContext* js_stmts();

  class  Js_function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Js_function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID_START_WITH_UNDERLINE();
    antlr4::tree::TerminalNode* ID_START_WITH_UNDERLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BACK_SLASH_STRINGS();
    antlr4::tree::TerminalNode* BACK_SLASH_STRINGS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNSIGNED_INTEGER();
    antlr4::tree::TerminalNode* UNSIGNED_INTEGER(size_t i);
    std::vector<Scientific_numContext *> scientific_num();
    Scientific_numContext* scientific_num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACE();
    antlr4::tree::TerminalNode* LBRACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACE();
    antlr4::tree::TerminalNode* RBRACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOLLAR();
    antlr4::tree::TerminalNode* DOLLAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> M_STRINGS();
    antlr4::tree::TerminalNode* M_STRINGS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Js_function_bodyContext* js_function_body();

  class  General_expressionContext : public antlr4::ParserRuleContext {
  public:
    General_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relational_expressionContext *relational_expression();
    antlr4::tree::TerminalNode *NOT();
    std::vector<General_expressionContext *> general_expression();
    General_expressionContext* general_expression(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_expressionContext* general_expression();
  General_expressionContext* general_expression(int precedence);
  class  Relational_expressionContext : public antlr4::ParserRuleContext {
  public:
    Relational_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_expressionContext *binary_expression();
    std::vector<Relational_expressionContext *> relational_expression();
    Relational_expressionContext* relational_expression(size_t i);
    Relational_operatorContext *relational_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_expressionContext* relational_expression();
  Relational_expressionContext* relational_expression(int precedence);
  class  Relational_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relational_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *NE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_operatorContext* relational_operator();

  class  Binary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Binary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_expressionContext *unary_expression();
    std::vector<Binary_expressionContext *> binary_expression();
    Binary_expressionContext* binary_expression(size_t i);
    Binary_operatorContext *binary_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_expressionContext* binary_expression();
  Binary_expressionContext* binary_expression(int precedence);
  class  Binary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTI();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_operatorContext* binary_operator();

  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_expressionContext *unary_expression();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *INVERT();
    antlr4::tree::TerminalNode *LPAREN();
    General_expressionContext *general_expression();
    antlr4::tree::TerminalNode *RPAREN();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_INTEGER();
    Scientific_numContext *scientific_num();
    antlr4::tree::TerminalNode *M_STRINGS();
    antlr4::tree::TerminalNode *M_TRUE();
    antlr4::tree::TerminalNode *M_FALSE();
    antlr4::tree::TerminalNode *REGEX_STRINGS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool general_expressionSempred(General_expressionContext *_localctx, size_t predicateIndex);
  bool relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex);
  bool binary_expressionSempred(Binary_expressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace mongodbcmd
