
// Generated from MongodbCmdParser.g4 by ANTLR 4.7.1


#include "MongodbCmdParserListener.h"
#include "MongodbCmdParserVisitor.h"

#include "MongodbCmdParser.h"


using namespace antlrcpp;
using namespace mongodbcmd;
using namespace antlr4;

MongodbCmdParser::MongodbCmdParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MongodbCmdParser::~MongodbCmdParser() {
  delete _interpreter;
}

std::string MongodbCmdParser::getGrammarFileName() const {
  return "MongodbCmdParser.g4";
}

const std::vector<std::string>& MongodbCmdParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MongodbCmdParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StmtContext ------------------------------------------------------------------

MongodbCmdParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::Db_nameContext* MongodbCmdParser::StmtContext::db_name() {
  return getRuleContext<MongodbCmdParser::Db_nameContext>(0);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::StmtContext::DOT() {
  return getTokens(MongodbCmdParser::DOT);
}

tree::TerminalNode* MongodbCmdParser::StmtContext::DOT(size_t i) {
  return getToken(MongodbCmdParser::DOT, i);
}

MongodbCmdParser::Command_functionContext* MongodbCmdParser::StmtContext::command_function() {
  return getRuleContext<MongodbCmdParser::Command_functionContext>(0);
}

tree::TerminalNode* MongodbCmdParser::StmtContext::LPAREN() {
  return getToken(MongodbCmdParser::LPAREN, 0);
}

MongodbCmdParser::ArgumentsContext* MongodbCmdParser::StmtContext::arguments() {
  return getRuleContext<MongodbCmdParser::ArgumentsContext>(0);
}

tree::TerminalNode* MongodbCmdParser::StmtContext::RPAREN() {
  return getToken(MongodbCmdParser::RPAREN, 0);
}

std::vector<MongodbCmdParser::Function_callContext *> MongodbCmdParser::StmtContext::function_call() {
  return getRuleContexts<MongodbCmdParser::Function_callContext>();
}

MongodbCmdParser::Function_callContext* MongodbCmdParser::StmtContext::function_call(size_t i) {
  return getRuleContext<MongodbCmdParser::Function_callContext>(i);
}

MongodbCmdParser::Use_stmtContext* MongodbCmdParser::StmtContext::use_stmt() {
  return getRuleContext<MongodbCmdParser::Use_stmtContext>(0);
}


size_t MongodbCmdParser::StmtContext::getRuleIndex() const {
  return MongodbCmdParser::RuleStmt;
}

void MongodbCmdParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void MongodbCmdParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any MongodbCmdParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::StmtContext* MongodbCmdParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 0, MongodbCmdParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(48);
      db_name();
      setState(53);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(49);
          match(MongodbCmdParser::DOT);
          setState(50);
          function_call(); 
        }
        setState(55);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      }
      setState(56);
      match(MongodbCmdParser::DOT);
      setState(57);
      command_function();
      setState(58);
      match(MongodbCmdParser::LPAREN);
      setState(59);
      arguments();
      setState(60);
      match(MongodbCmdParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(62);
      db_name();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MongodbCmdParser::DOT) {
        setState(63);
        match(MongodbCmdParser::DOT);
        setState(64);
        function_call();
        setState(69);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(70);
      use_stmt();
      break;
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

//----------------- Command_functionContext ------------------------------------------------------------------

MongodbCmdParser::Command_functionContext::Command_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Command_functionContext::RUNCOMMAND() {
  return getToken(MongodbCmdParser::RUNCOMMAND, 0);
}

tree::TerminalNode* MongodbCmdParser::Command_functionContext::ADMINCOMMAND() {
  return getToken(MongodbCmdParser::ADMINCOMMAND, 0);
}


size_t MongodbCmdParser::Command_functionContext::getRuleIndex() const {
  return MongodbCmdParser::RuleCommand_function;
}

void MongodbCmdParser::Command_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand_function(this);
}

void MongodbCmdParser::Command_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand_function(this);
}


antlrcpp::Any MongodbCmdParser::Command_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitCommand_function(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Command_functionContext* MongodbCmdParser::command_function() {
  Command_functionContext *_localctx = _tracker.createInstance<Command_functionContext>(_ctx, getState());
  enterRule(_localctx, 2, MongodbCmdParser::RuleCommand_function);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _la = _input->LA(1);
    if (!(_la == MongodbCmdParser::RUNCOMMAND

    || _la == MongodbCmdParser::ADMINCOMMAND)) {
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

//----------------- Use_stmtContext ------------------------------------------------------------------

MongodbCmdParser::Use_stmtContext::Use_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Use_stmtContext::M_USE() {
  return getToken(MongodbCmdParser::M_USE, 0);
}

MongodbCmdParser::Db_nameContext* MongodbCmdParser::Use_stmtContext::db_name() {
  return getRuleContext<MongodbCmdParser::Db_nameContext>(0);
}


size_t MongodbCmdParser::Use_stmtContext::getRuleIndex() const {
  return MongodbCmdParser::RuleUse_stmt;
}

void MongodbCmdParser::Use_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUse_stmt(this);
}

void MongodbCmdParser::Use_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUse_stmt(this);
}


antlrcpp::Any MongodbCmdParser::Use_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitUse_stmt(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Use_stmtContext* MongodbCmdParser::use_stmt() {
  Use_stmtContext *_localctx = _tracker.createInstance<Use_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, MongodbCmdParser::RuleUse_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(MongodbCmdParser::M_USE);
    setState(76);
    db_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Db_nameContext ------------------------------------------------------------------

MongodbCmdParser::Db_nameContext::Db_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Db_nameContext::IDENTIFIER() {
  return getToken(MongodbCmdParser::IDENTIFIER, 0);
}


size_t MongodbCmdParser::Db_nameContext::getRuleIndex() const {
  return MongodbCmdParser::RuleDb_name;
}

void MongodbCmdParser::Db_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDb_name(this);
}

void MongodbCmdParser::Db_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDb_name(this);
}


antlrcpp::Any MongodbCmdParser::Db_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitDb_name(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Db_nameContext* MongodbCmdParser::db_name() {
  Db_nameContext *_localctx = _tracker.createInstance<Db_nameContext>(_ctx, getState());
  enterRule(_localctx, 6, MongodbCmdParser::RuleDb_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(MongodbCmdParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_nameContext ------------------------------------------------------------------

MongodbCmdParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Function_nameContext::IDENTIFIER() {
  return getToken(MongodbCmdParser::IDENTIFIER, 0);
}

tree::TerminalNode* MongodbCmdParser::Function_nameContext::ID_START_WITH_UNDERLINE() {
  return getToken(MongodbCmdParser::ID_START_WITH_UNDERLINE, 0);
}


size_t MongodbCmdParser::Function_nameContext::getRuleIndex() const {
  return MongodbCmdParser::RuleFunction_name;
}

void MongodbCmdParser::Function_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_name(this);
}

void MongodbCmdParser::Function_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_name(this);
}


antlrcpp::Any MongodbCmdParser::Function_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitFunction_name(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Function_nameContext* MongodbCmdParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 8, MongodbCmdParser::RuleFunction_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    _la = _input->LA(1);
    if (!(_la == MongodbCmdParser::IDENTIFIER

    || _la == MongodbCmdParser::ID_START_WITH_UNDERLINE)) {
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

//----------------- ArgumentsContext ------------------------------------------------------------------

MongodbCmdParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::MlistContext* MongodbCmdParser::ArgumentsContext::mlist() {
  return getRuleContext<MongodbCmdParser::MlistContext>(0);
}


size_t MongodbCmdParser::ArgumentsContext::getRuleIndex() const {
  return MongodbCmdParser::RuleArguments;
}

void MongodbCmdParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void MongodbCmdParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


antlrcpp::Any MongodbCmdParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::ArgumentsContext* MongodbCmdParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 10, MongodbCmdParser::RuleArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    mlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MarrayContext ------------------------------------------------------------------

MongodbCmdParser::MarrayContext::MarrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::MarrayContext::LBRACKET() {
  return getToken(MongodbCmdParser::LBRACKET, 0);
}

std::vector<MongodbCmdParser::MvalueContext *> MongodbCmdParser::MarrayContext::mvalue() {
  return getRuleContexts<MongodbCmdParser::MvalueContext>();
}

MongodbCmdParser::MvalueContext* MongodbCmdParser::MarrayContext::mvalue(size_t i) {
  return getRuleContext<MongodbCmdParser::MvalueContext>(i);
}

tree::TerminalNode* MongodbCmdParser::MarrayContext::RBRACKET() {
  return getToken(MongodbCmdParser::RBRACKET, 0);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::MarrayContext::COMMA() {
  return getTokens(MongodbCmdParser::COMMA);
}

tree::TerminalNode* MongodbCmdParser::MarrayContext::COMMA(size_t i) {
  return getToken(MongodbCmdParser::COMMA, i);
}


size_t MongodbCmdParser::MarrayContext::getRuleIndex() const {
  return MongodbCmdParser::RuleMarray;
}

void MongodbCmdParser::MarrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMarray(this);
}

void MongodbCmdParser::MarrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMarray(this);
}


antlrcpp::Any MongodbCmdParser::MarrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitMarray(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::MarrayContext* MongodbCmdParser::marray() {
  MarrayContext *_localctx = _tracker.createInstance<MarrayContext>(_ctx, getState());
  enterRule(_localctx, 12, MongodbCmdParser::RuleMarray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(MongodbCmdParser::LBRACKET);
    setState(85);
    mvalue();
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MongodbCmdParser::COMMA) {
      setState(86);
      match(MongodbCmdParser::COMMA);
      setState(87);
      mvalue();
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    match(MongodbCmdParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MlistContext ------------------------------------------------------------------

MongodbCmdParser::MlistContext::MlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::MlistContext::LBRACE() {
  return getToken(MongodbCmdParser::LBRACE, 0);
}

tree::TerminalNode* MongodbCmdParser::MlistContext::RBRACE() {
  return getToken(MongodbCmdParser::RBRACE, 0);
}

std::vector<MongodbCmdParser::Key_valueContext *> MongodbCmdParser::MlistContext::key_value() {
  return getRuleContexts<MongodbCmdParser::Key_valueContext>();
}

MongodbCmdParser::Key_valueContext* MongodbCmdParser::MlistContext::key_value(size_t i) {
  return getRuleContext<MongodbCmdParser::Key_valueContext>(i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::MlistContext::COMMA() {
  return getTokens(MongodbCmdParser::COMMA);
}

tree::TerminalNode* MongodbCmdParser::MlistContext::COMMA(size_t i) {
  return getToken(MongodbCmdParser::COMMA, i);
}


size_t MongodbCmdParser::MlistContext::getRuleIndex() const {
  return MongodbCmdParser::RuleMlist;
}

void MongodbCmdParser::MlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMlist(this);
}

void MongodbCmdParser::MlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMlist(this);
}


antlrcpp::Any MongodbCmdParser::MlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitMlist(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::MlistContext* MongodbCmdParser::mlist() {
  MlistContext *_localctx = _tracker.createInstance<MlistContext>(_ctx, getState());
  enterRule(_localctx, 14, MongodbCmdParser::RuleMlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(MongodbCmdParser::LBRACE);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MongodbCmdParser::MONGO_OPERATORS)
      | (1ULL << MongodbCmdParser::IDENTIFIER)
      | (1ULL << MongodbCmdParser::ID_START_WITH_UNDERLINE)
      | (1ULL << MongodbCmdParser::M_STRINGS))) != 0)) {
      setState(96);
      key_value();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MongodbCmdParser::COMMA) {
        setState(97);
        match(MongodbCmdParser::COMMA);
        setState(98);
        key_value();
        setState(103);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(106);
    match(MongodbCmdParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Key_valueContext ------------------------------------------------------------------

MongodbCmdParser::Key_valueContext::Key_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::MkeyContext* MongodbCmdParser::Key_valueContext::mkey() {
  return getRuleContext<MongodbCmdParser::MkeyContext>(0);
}

tree::TerminalNode* MongodbCmdParser::Key_valueContext::COLON() {
  return getToken(MongodbCmdParser::COLON, 0);
}

MongodbCmdParser::MvalueContext* MongodbCmdParser::Key_valueContext::mvalue() {
  return getRuleContext<MongodbCmdParser::MvalueContext>(0);
}


size_t MongodbCmdParser::Key_valueContext::getRuleIndex() const {
  return MongodbCmdParser::RuleKey_value;
}

void MongodbCmdParser::Key_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKey_value(this);
}

void MongodbCmdParser::Key_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKey_value(this);
}


antlrcpp::Any MongodbCmdParser::Key_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitKey_value(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Key_valueContext* MongodbCmdParser::key_value() {
  Key_valueContext *_localctx = _tracker.createInstance<Key_valueContext>(_ctx, getState());
  enterRule(_localctx, 16, MongodbCmdParser::RuleKey_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    mkey();
    setState(109);
    match(MongodbCmdParser::COLON);
    setState(110);
    mvalue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MkeyContext ------------------------------------------------------------------

MongodbCmdParser::MkeyContext::MkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::MkeyContext::IDENTIFIER() {
  return getToken(MongodbCmdParser::IDENTIFIER, 0);
}

tree::TerminalNode* MongodbCmdParser::MkeyContext::ID_START_WITH_UNDERLINE() {
  return getToken(MongodbCmdParser::ID_START_WITH_UNDERLINE, 0);
}

tree::TerminalNode* MongodbCmdParser::MkeyContext::M_STRINGS() {
  return getToken(MongodbCmdParser::M_STRINGS, 0);
}

tree::TerminalNode* MongodbCmdParser::MkeyContext::MONGO_OPERATORS() {
  return getToken(MongodbCmdParser::MONGO_OPERATORS, 0);
}


size_t MongodbCmdParser::MkeyContext::getRuleIndex() const {
  return MongodbCmdParser::RuleMkey;
}

void MongodbCmdParser::MkeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMkey(this);
}

void MongodbCmdParser::MkeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMkey(this);
}


antlrcpp::Any MongodbCmdParser::MkeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitMkey(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::MkeyContext* MongodbCmdParser::mkey() {
  MkeyContext *_localctx = _tracker.createInstance<MkeyContext>(_ctx, getState());
  enterRule(_localctx, 18, MongodbCmdParser::RuleMkey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MongodbCmdParser::MONGO_OPERATORS)
      | (1ULL << MongodbCmdParser::IDENTIFIER)
      | (1ULL << MongodbCmdParser::ID_START_WITH_UNDERLINE)
      | (1ULL << MongodbCmdParser::M_STRINGS))) != 0))) {
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

//----------------- MvalueContext ------------------------------------------------------------------

MongodbCmdParser::MvalueContext::MvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::Scientific_numContext* MongodbCmdParser::MvalueContext::scientific_num() {
  return getRuleContext<MongodbCmdParser::Scientific_numContext>(0);
}

tree::TerminalNode* MongodbCmdParser::MvalueContext::M_STRINGS() {
  return getToken(MongodbCmdParser::M_STRINGS, 0);
}

tree::TerminalNode* MongodbCmdParser::MvalueContext::UNSIGNED_INTEGER() {
  return getToken(MongodbCmdParser::UNSIGNED_INTEGER, 0);
}

MongodbCmdParser::MarrayContext* MongodbCmdParser::MvalueContext::marray() {
  return getRuleContext<MongodbCmdParser::MarrayContext>(0);
}

MongodbCmdParser::MlistContext* MongodbCmdParser::MvalueContext::mlist() {
  return getRuleContext<MongodbCmdParser::MlistContext>(0);
}

tree::TerminalNode* MongodbCmdParser::MvalueContext::REGEX_STRINGS() {
  return getToken(MongodbCmdParser::REGEX_STRINGS, 0);
}

tree::TerminalNode* MongodbCmdParser::MvalueContext::M_TRUE() {
  return getToken(MongodbCmdParser::M_TRUE, 0);
}

tree::TerminalNode* MongodbCmdParser::MvalueContext::M_FALSE() {
  return getToken(MongodbCmdParser::M_FALSE, 0);
}

MongodbCmdParser::Function_callContext* MongodbCmdParser::MvalueContext::function_call() {
  return getRuleContext<MongodbCmdParser::Function_callContext>(0);
}

MongodbCmdParser::Js_stmtsContext* MongodbCmdParser::MvalueContext::js_stmts() {
  return getRuleContext<MongodbCmdParser::Js_stmtsContext>(0);
}

MongodbCmdParser::General_expressionContext* MongodbCmdParser::MvalueContext::general_expression() {
  return getRuleContext<MongodbCmdParser::General_expressionContext>(0);
}


size_t MongodbCmdParser::MvalueContext::getRuleIndex() const {
  return MongodbCmdParser::RuleMvalue;
}

void MongodbCmdParser::MvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMvalue(this);
}

void MongodbCmdParser::MvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMvalue(this);
}


antlrcpp::Any MongodbCmdParser::MvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitMvalue(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::MvalueContext* MongodbCmdParser::mvalue() {
  MvalueContext *_localctx = _tracker.createInstance<MvalueContext>(_ctx, getState());
  enterRule(_localctx, 20, MongodbCmdParser::RuleMvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      scientific_num();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      match(MongodbCmdParser::M_STRINGS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(116);
      match(MongodbCmdParser::UNSIGNED_INTEGER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(117);
      marray();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(118);
      mlist();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(119);
      match(MongodbCmdParser::REGEX_STRINGS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(120);
      match(MongodbCmdParser::M_TRUE);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(121);
      match(MongodbCmdParser::M_FALSE);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(122);
      function_call();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(123);
      js_stmts();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(124);
      general_expression(0);
      break;
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

//----------------- Scientific_numContext ------------------------------------------------------------------

MongodbCmdParser::Scientific_numContext::Scientific_numContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Scientific_numContext::APPROXIMATE_NUM() {
  return getToken(MongodbCmdParser::APPROXIMATE_NUM, 0);
}


size_t MongodbCmdParser::Scientific_numContext::getRuleIndex() const {
  return MongodbCmdParser::RuleScientific_num;
}

void MongodbCmdParser::Scientific_numContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScientific_num(this);
}

void MongodbCmdParser::Scientific_numContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScientific_num(this);
}


antlrcpp::Any MongodbCmdParser::Scientific_numContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitScientific_num(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Scientific_numContext* MongodbCmdParser::scientific_num() {
  Scientific_numContext *_localctx = _tracker.createInstance<Scientific_numContext>(_ctx, getState());
  enterRule(_localctx, 22, MongodbCmdParser::RuleScientific_num);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(MongodbCmdParser::APPROXIMATE_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

MongodbCmdParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::Function_nameContext* MongodbCmdParser::Function_callContext::function_name() {
  return getRuleContext<MongodbCmdParser::Function_nameContext>(0);
}

tree::TerminalNode* MongodbCmdParser::Function_callContext::LPAREN() {
  return getToken(MongodbCmdParser::LPAREN, 0);
}

tree::TerminalNode* MongodbCmdParser::Function_callContext::RPAREN() {
  return getToken(MongodbCmdParser::RPAREN, 0);
}

MongodbCmdParser::Func_argsContext* MongodbCmdParser::Function_callContext::func_args() {
  return getRuleContext<MongodbCmdParser::Func_argsContext>(0);
}


size_t MongodbCmdParser::Function_callContext::getRuleIndex() const {
  return MongodbCmdParser::RuleFunction_call;
}

void MongodbCmdParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void MongodbCmdParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


antlrcpp::Any MongodbCmdParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Function_callContext* MongodbCmdParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 24, MongodbCmdParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    function_name();
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MongodbCmdParser::LPAREN) {
      setState(130);
      match(MongodbCmdParser::LPAREN);
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MongodbCmdParser::M_TRUE)
        | (1ULL << MongodbCmdParser::M_FALSE)
        | (1ULL << MongodbCmdParser::M_NEW)
        | (1ULL << MongodbCmdParser::M_FUNCTION)
        | (1ULL << MongodbCmdParser::UNSIGNED_INTEGER)
        | (1ULL << MongodbCmdParser::APPROXIMATE_NUM)
        | (1ULL << MongodbCmdParser::IDENTIFIER)
        | (1ULL << MongodbCmdParser::ID_START_WITH_UNDERLINE)
        | (1ULL << MongodbCmdParser::M_STRINGS)
        | (1ULL << MongodbCmdParser::REGEX_STRINGS)
        | (1ULL << MongodbCmdParser::LPAREN)
        | (1ULL << MongodbCmdParser::LBRACKET)
        | (1ULL << MongodbCmdParser::LBRACE)
        | (1ULL << MongodbCmdParser::PLUS)
        | (1ULL << MongodbCmdParser::MINUS)
        | (1ULL << MongodbCmdParser::NOT)
        | (1ULL << MongodbCmdParser::INVERT))) != 0)) {
        setState(131);
        func_args();
      }
      setState(134);
      match(MongodbCmdParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_argsContext ------------------------------------------------------------------

MongodbCmdParser::Func_argsContext::Func_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MongodbCmdParser::Func_argContext *> MongodbCmdParser::Func_argsContext::func_arg() {
  return getRuleContexts<MongodbCmdParser::Func_argContext>();
}

MongodbCmdParser::Func_argContext* MongodbCmdParser::Func_argsContext::func_arg(size_t i) {
  return getRuleContext<MongodbCmdParser::Func_argContext>(i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Func_argsContext::COMMA() {
  return getTokens(MongodbCmdParser::COMMA);
}

tree::TerminalNode* MongodbCmdParser::Func_argsContext::COMMA(size_t i) {
  return getToken(MongodbCmdParser::COMMA, i);
}


size_t MongodbCmdParser::Func_argsContext::getRuleIndex() const {
  return MongodbCmdParser::RuleFunc_args;
}

void MongodbCmdParser::Func_argsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_args(this);
}

void MongodbCmdParser::Func_argsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_args(this);
}


antlrcpp::Any MongodbCmdParser::Func_argsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitFunc_args(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Func_argsContext* MongodbCmdParser::func_args() {
  Func_argsContext *_localctx = _tracker.createInstance<Func_argsContext>(_ctx, getState());
  enterRule(_localctx, 26, MongodbCmdParser::RuleFunc_args);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    func_arg();
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MongodbCmdParser::COMMA) {
      setState(138);
      match(MongodbCmdParser::COMMA);
      setState(139);
      func_arg();
      setState(144);
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

//----------------- Func_argContext ------------------------------------------------------------------

MongodbCmdParser::Func_argContext::Func_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Func_argContext::IDENTIFIER() {
  return getToken(MongodbCmdParser::IDENTIFIER, 0);
}

tree::TerminalNode* MongodbCmdParser::Func_argContext::ID_START_WITH_UNDERLINE() {
  return getToken(MongodbCmdParser::ID_START_WITH_UNDERLINE, 0);
}

MongodbCmdParser::MvalueContext* MongodbCmdParser::Func_argContext::mvalue() {
  return getRuleContext<MongodbCmdParser::MvalueContext>(0);
}


size_t MongodbCmdParser::Func_argContext::getRuleIndex() const {
  return MongodbCmdParser::RuleFunc_arg;
}

void MongodbCmdParser::Func_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_arg(this);
}

void MongodbCmdParser::Func_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_arg(this);
}


antlrcpp::Any MongodbCmdParser::Func_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitFunc_arg(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Func_argContext* MongodbCmdParser::func_arg() {
  Func_argContext *_localctx = _tracker.createInstance<Func_argContext>(_ctx, getState());
  enterRule(_localctx, 28, MongodbCmdParser::RuleFunc_arg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(145);
      match(MongodbCmdParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(146);
      match(MongodbCmdParser::ID_START_WITH_UNDERLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(147);
      mvalue();
      break;
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

//----------------- Js_stmtsContext ------------------------------------------------------------------

MongodbCmdParser::Js_stmtsContext::Js_stmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Js_stmtsContext::M_NEW() {
  return getToken(MongodbCmdParser::M_NEW, 0);
}

MongodbCmdParser::Function_callContext* MongodbCmdParser::Js_stmtsContext::function_call() {
  return getRuleContext<MongodbCmdParser::Function_callContext>(0);
}

tree::TerminalNode* MongodbCmdParser::Js_stmtsContext::M_FUNCTION() {
  return getToken(MongodbCmdParser::M_FUNCTION, 0);
}

tree::TerminalNode* MongodbCmdParser::Js_stmtsContext::LPAREN() {
  return getToken(MongodbCmdParser::LPAREN, 0);
}

tree::TerminalNode* MongodbCmdParser::Js_stmtsContext::RPAREN() {
  return getToken(MongodbCmdParser::RPAREN, 0);
}

tree::TerminalNode* MongodbCmdParser::Js_stmtsContext::LBRACE() {
  return getToken(MongodbCmdParser::LBRACE, 0);
}

MongodbCmdParser::Js_function_bodyContext* MongodbCmdParser::Js_stmtsContext::js_function_body() {
  return getRuleContext<MongodbCmdParser::Js_function_bodyContext>(0);
}

tree::TerminalNode* MongodbCmdParser::Js_stmtsContext::RBRACE() {
  return getToken(MongodbCmdParser::RBRACE, 0);
}

MongodbCmdParser::Func_argsContext* MongodbCmdParser::Js_stmtsContext::func_args() {
  return getRuleContext<MongodbCmdParser::Func_argsContext>(0);
}


size_t MongodbCmdParser::Js_stmtsContext::getRuleIndex() const {
  return MongodbCmdParser::RuleJs_stmts;
}

void MongodbCmdParser::Js_stmtsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJs_stmts(this);
}

void MongodbCmdParser::Js_stmtsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJs_stmts(this);
}


antlrcpp::Any MongodbCmdParser::Js_stmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitJs_stmts(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Js_stmtsContext* MongodbCmdParser::js_stmts() {
  Js_stmtsContext *_localctx = _tracker.createInstance<Js_stmtsContext>(_ctx, getState());
  enterRule(_localctx, 30, MongodbCmdParser::RuleJs_stmts);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MongodbCmdParser::M_NEW: {
        enterOuterAlt(_localctx, 1);
        setState(150);
        match(MongodbCmdParser::M_NEW);
        setState(151);
        function_call();
        break;
      }

      case MongodbCmdParser::M_FUNCTION: {
        enterOuterAlt(_localctx, 2);
        setState(152);
        match(MongodbCmdParser::M_FUNCTION);
        setState(153);
        match(MongodbCmdParser::LPAREN);
        setState(155);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MongodbCmdParser::M_TRUE)
          | (1ULL << MongodbCmdParser::M_FALSE)
          | (1ULL << MongodbCmdParser::M_NEW)
          | (1ULL << MongodbCmdParser::M_FUNCTION)
          | (1ULL << MongodbCmdParser::UNSIGNED_INTEGER)
          | (1ULL << MongodbCmdParser::APPROXIMATE_NUM)
          | (1ULL << MongodbCmdParser::IDENTIFIER)
          | (1ULL << MongodbCmdParser::ID_START_WITH_UNDERLINE)
          | (1ULL << MongodbCmdParser::M_STRINGS)
          | (1ULL << MongodbCmdParser::REGEX_STRINGS)
          | (1ULL << MongodbCmdParser::LPAREN)
          | (1ULL << MongodbCmdParser::LBRACKET)
          | (1ULL << MongodbCmdParser::LBRACE)
          | (1ULL << MongodbCmdParser::PLUS)
          | (1ULL << MongodbCmdParser::MINUS)
          | (1ULL << MongodbCmdParser::NOT)
          | (1ULL << MongodbCmdParser::INVERT))) != 0)) {
          setState(154);
          func_args();
        }
        setState(157);
        match(MongodbCmdParser::RPAREN);
        setState(158);
        match(MongodbCmdParser::LBRACE);
        setState(159);
        js_function_body();
        setState(160);
        match(MongodbCmdParser::RBRACE);
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

//----------------- Js_function_bodyContext ------------------------------------------------------------------

MongodbCmdParser::Js_function_bodyContext::Js_function_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::DOT() {
  return getTokens(MongodbCmdParser::DOT);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::DOT(size_t i) {
  return getToken(MongodbCmdParser::DOT, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::IDENTIFIER() {
  return getTokens(MongodbCmdParser::IDENTIFIER);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::IDENTIFIER(size_t i) {
  return getToken(MongodbCmdParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::ID_START_WITH_UNDERLINE() {
  return getTokens(MongodbCmdParser::ID_START_WITH_UNDERLINE);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::ID_START_WITH_UNDERLINE(size_t i) {
  return getToken(MongodbCmdParser::ID_START_WITH_UNDERLINE, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::BACK_SLASH_STRINGS() {
  return getTokens(MongodbCmdParser::BACK_SLASH_STRINGS);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::BACK_SLASH_STRINGS(size_t i) {
  return getToken(MongodbCmdParser::BACK_SLASH_STRINGS, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::UNSIGNED_INTEGER() {
  return getTokens(MongodbCmdParser::UNSIGNED_INTEGER);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::UNSIGNED_INTEGER(size_t i) {
  return getToken(MongodbCmdParser::UNSIGNED_INTEGER, i);
}

std::vector<MongodbCmdParser::Scientific_numContext *> MongodbCmdParser::Js_function_bodyContext::scientific_num() {
  return getRuleContexts<MongodbCmdParser::Scientific_numContext>();
}

MongodbCmdParser::Scientific_numContext* MongodbCmdParser::Js_function_bodyContext::scientific_num(size_t i) {
  return getRuleContext<MongodbCmdParser::Scientific_numContext>(i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::LPAREN() {
  return getTokens(MongodbCmdParser::LPAREN);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::LPAREN(size_t i) {
  return getToken(MongodbCmdParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::RPAREN() {
  return getTokens(MongodbCmdParser::RPAREN);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::RPAREN(size_t i) {
  return getToken(MongodbCmdParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::LBRACE() {
  return getTokens(MongodbCmdParser::LBRACE);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::LBRACE(size_t i) {
  return getToken(MongodbCmdParser::LBRACE, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::RBRACE() {
  return getTokens(MongodbCmdParser::RBRACE);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::RBRACE(size_t i) {
  return getToken(MongodbCmdParser::RBRACE, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::SEMI() {
  return getTokens(MongodbCmdParser::SEMI);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::SEMI(size_t i) {
  return getToken(MongodbCmdParser::SEMI, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::COMMA() {
  return getTokens(MongodbCmdParser::COMMA);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::COMMA(size_t i) {
  return getToken(MongodbCmdParser::COMMA, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::DOLLAR() {
  return getTokens(MongodbCmdParser::DOLLAR);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::DOLLAR(size_t i) {
  return getToken(MongodbCmdParser::DOLLAR, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::EQ() {
  return getTokens(MongodbCmdParser::EQ);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::EQ(size_t i) {
  return getToken(MongodbCmdParser::EQ, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::GT() {
  return getTokens(MongodbCmdParser::GT);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::GT(size_t i) {
  return getToken(MongodbCmdParser::GT, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::LT() {
  return getTokens(MongodbCmdParser::LT);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::LT(size_t i) {
  return getToken(MongodbCmdParser::LT, i);
}

std::vector<tree::TerminalNode *> MongodbCmdParser::Js_function_bodyContext::M_STRINGS() {
  return getTokens(MongodbCmdParser::M_STRINGS);
}

tree::TerminalNode* MongodbCmdParser::Js_function_bodyContext::M_STRINGS(size_t i) {
  return getToken(MongodbCmdParser::M_STRINGS, i);
}


size_t MongodbCmdParser::Js_function_bodyContext::getRuleIndex() const {
  return MongodbCmdParser::RuleJs_function_body;
}

void MongodbCmdParser::Js_function_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJs_function_body(this);
}

void MongodbCmdParser::Js_function_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJs_function_body(this);
}


antlrcpp::Any MongodbCmdParser::Js_function_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitJs_function_body(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Js_function_bodyContext* MongodbCmdParser::js_function_body() {
  Js_function_bodyContext *_localctx = _tracker.createInstance<Js_function_bodyContext>(_ctx, getState());
  enterRule(_localctx, 32, MongodbCmdParser::RuleJs_function_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(181); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(181);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case MongodbCmdParser::DOT: {
                  setState(164);
                  match(MongodbCmdParser::DOT);
                  break;
                }

                case MongodbCmdParser::IDENTIFIER: {
                  setState(165);
                  match(MongodbCmdParser::IDENTIFIER);
                  break;
                }

                case MongodbCmdParser::ID_START_WITH_UNDERLINE: {
                  setState(166);
                  match(MongodbCmdParser::ID_START_WITH_UNDERLINE);
                  break;
                }

                case MongodbCmdParser::BACK_SLASH_STRINGS: {
                  setState(167);
                  match(MongodbCmdParser::BACK_SLASH_STRINGS);
                  break;
                }

                case MongodbCmdParser::UNSIGNED_INTEGER: {
                  setState(168);
                  match(MongodbCmdParser::UNSIGNED_INTEGER);
                  break;
                }

                case MongodbCmdParser::APPROXIMATE_NUM: {
                  setState(169);
                  scientific_num();
                  break;
                }

                case MongodbCmdParser::LPAREN: {
                  setState(170);
                  match(MongodbCmdParser::LPAREN);
                  break;
                }

                case MongodbCmdParser::RPAREN: {
                  setState(171);
                  match(MongodbCmdParser::RPAREN);
                  break;
                }

                case MongodbCmdParser::LBRACE: {
                  setState(172);
                  match(MongodbCmdParser::LBRACE);
                  break;
                }

                case MongodbCmdParser::RBRACE: {
                  setState(173);
                  match(MongodbCmdParser::RBRACE);
                  break;
                }

                case MongodbCmdParser::SEMI: {
                  setState(174);
                  match(MongodbCmdParser::SEMI);
                  break;
                }

                case MongodbCmdParser::COMMA: {
                  setState(175);
                  match(MongodbCmdParser::COMMA);
                  break;
                }

                case MongodbCmdParser::DOLLAR: {
                  setState(176);
                  match(MongodbCmdParser::DOLLAR);
                  break;
                }

                case MongodbCmdParser::EQ: {
                  setState(177);
                  match(MongodbCmdParser::EQ);
                  break;
                }

                case MongodbCmdParser::GT: {
                  setState(178);
                  match(MongodbCmdParser::GT);
                  break;
                }

                case MongodbCmdParser::LT: {
                  setState(179);
                  match(MongodbCmdParser::LT);
                  break;
                }

                case MongodbCmdParser::M_STRINGS: {
                  setState(180);
                  match(MongodbCmdParser::M_STRINGS);
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(183); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- General_expressionContext ------------------------------------------------------------------

MongodbCmdParser::General_expressionContext::General_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::Relational_expressionContext* MongodbCmdParser::General_expressionContext::relational_expression() {
  return getRuleContext<MongodbCmdParser::Relational_expressionContext>(0);
}

tree::TerminalNode* MongodbCmdParser::General_expressionContext::NOT() {
  return getToken(MongodbCmdParser::NOT, 0);
}

std::vector<MongodbCmdParser::General_expressionContext *> MongodbCmdParser::General_expressionContext::general_expression() {
  return getRuleContexts<MongodbCmdParser::General_expressionContext>();
}

MongodbCmdParser::General_expressionContext* MongodbCmdParser::General_expressionContext::general_expression(size_t i) {
  return getRuleContext<MongodbCmdParser::General_expressionContext>(i);
}

tree::TerminalNode* MongodbCmdParser::General_expressionContext::AND() {
  return getToken(MongodbCmdParser::AND, 0);
}

tree::TerminalNode* MongodbCmdParser::General_expressionContext::OR() {
  return getToken(MongodbCmdParser::OR, 0);
}


size_t MongodbCmdParser::General_expressionContext::getRuleIndex() const {
  return MongodbCmdParser::RuleGeneral_expression;
}

void MongodbCmdParser::General_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneral_expression(this);
}

void MongodbCmdParser::General_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneral_expression(this);
}


antlrcpp::Any MongodbCmdParser::General_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitGeneral_expression(this);
  else
    return visitor->visitChildren(this);
}


MongodbCmdParser::General_expressionContext* MongodbCmdParser::general_expression() {
   return general_expression(0);
}

MongodbCmdParser::General_expressionContext* MongodbCmdParser::general_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MongodbCmdParser::General_expressionContext *_localctx = _tracker.createInstance<General_expressionContext>(_ctx, parentState);
  MongodbCmdParser::General_expressionContext *previousContext = _localctx;
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, MongodbCmdParser::RuleGeneral_expression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(189);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MongodbCmdParser::M_TRUE:
      case MongodbCmdParser::M_FALSE:
      case MongodbCmdParser::UNSIGNED_INTEGER:
      case MongodbCmdParser::APPROXIMATE_NUM:
      case MongodbCmdParser::M_STRINGS:
      case MongodbCmdParser::REGEX_STRINGS:
      case MongodbCmdParser::LPAREN:
      case MongodbCmdParser::PLUS:
      case MongodbCmdParser::MINUS:
      case MongodbCmdParser::INVERT: {
        setState(186);
        relational_expression(0);
        break;
      }

      case MongodbCmdParser::NOT: {
        setState(187);
        match(MongodbCmdParser::NOT);
        setState(188);
        general_expression(2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<General_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleGeneral_expression);
        setState(191);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(192);
        _la = _input->LA(1);
        if (!(_la == MongodbCmdParser::AND

        || _la == MongodbCmdParser::OR)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(193);
        general_expression(2); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Relational_expressionContext ------------------------------------------------------------------

MongodbCmdParser::Relational_expressionContext::Relational_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::Binary_expressionContext* MongodbCmdParser::Relational_expressionContext::binary_expression() {
  return getRuleContext<MongodbCmdParser::Binary_expressionContext>(0);
}

std::vector<MongodbCmdParser::Relational_expressionContext *> MongodbCmdParser::Relational_expressionContext::relational_expression() {
  return getRuleContexts<MongodbCmdParser::Relational_expressionContext>();
}

MongodbCmdParser::Relational_expressionContext* MongodbCmdParser::Relational_expressionContext::relational_expression(size_t i) {
  return getRuleContext<MongodbCmdParser::Relational_expressionContext>(i);
}

MongodbCmdParser::Relational_operatorContext* MongodbCmdParser::Relational_expressionContext::relational_operator() {
  return getRuleContext<MongodbCmdParser::Relational_operatorContext>(0);
}


size_t MongodbCmdParser::Relational_expressionContext::getRuleIndex() const {
  return MongodbCmdParser::RuleRelational_expression;
}

void MongodbCmdParser::Relational_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_expression(this);
}

void MongodbCmdParser::Relational_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_expression(this);
}


antlrcpp::Any MongodbCmdParser::Relational_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitRelational_expression(this);
  else
    return visitor->visitChildren(this);
}


MongodbCmdParser::Relational_expressionContext* MongodbCmdParser::relational_expression() {
   return relational_expression(0);
}

MongodbCmdParser::Relational_expressionContext* MongodbCmdParser::relational_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MongodbCmdParser::Relational_expressionContext *_localctx = _tracker.createInstance<Relational_expressionContext>(_ctx, parentState);
  MongodbCmdParser::Relational_expressionContext *previousContext = _localctx;
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, MongodbCmdParser::RuleRelational_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(200);
    binary_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(208);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
        setState(202);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(203);
        relational_operator();
        setState(204);
        relational_expression(3); 
      }
      setState(210);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Relational_operatorContext ------------------------------------------------------------------

MongodbCmdParser::Relational_operatorContext::Relational_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Relational_operatorContext::EQ() {
  return getToken(MongodbCmdParser::EQ, 0);
}

tree::TerminalNode* MongodbCmdParser::Relational_operatorContext::GT() {
  return getToken(MongodbCmdParser::GT, 0);
}

tree::TerminalNode* MongodbCmdParser::Relational_operatorContext::LT() {
  return getToken(MongodbCmdParser::LT, 0);
}

tree::TerminalNode* MongodbCmdParser::Relational_operatorContext::GE() {
  return getToken(MongodbCmdParser::GE, 0);
}

tree::TerminalNode* MongodbCmdParser::Relational_operatorContext::LE() {
  return getToken(MongodbCmdParser::LE, 0);
}

tree::TerminalNode* MongodbCmdParser::Relational_operatorContext::NE() {
  return getToken(MongodbCmdParser::NE, 0);
}


size_t MongodbCmdParser::Relational_operatorContext::getRuleIndex() const {
  return MongodbCmdParser::RuleRelational_operator;
}

void MongodbCmdParser::Relational_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_operator(this);
}

void MongodbCmdParser::Relational_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_operator(this);
}


antlrcpp::Any MongodbCmdParser::Relational_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitRelational_operator(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Relational_operatorContext* MongodbCmdParser::relational_operator() {
  Relational_operatorContext *_localctx = _tracker.createInstance<Relational_operatorContext>(_ctx, getState());
  enterRule(_localctx, 38, MongodbCmdParser::RuleRelational_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MongodbCmdParser::GT)
      | (1ULL << MongodbCmdParser::LT)
      | (1ULL << MongodbCmdParser::EQ)
      | (1ULL << MongodbCmdParser::GE)
      | (1ULL << MongodbCmdParser::LE)
      | (1ULL << MongodbCmdParser::NE))) != 0))) {
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

//----------------- Binary_expressionContext ------------------------------------------------------------------

MongodbCmdParser::Binary_expressionContext::Binary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::Unary_expressionContext* MongodbCmdParser::Binary_expressionContext::unary_expression() {
  return getRuleContext<MongodbCmdParser::Unary_expressionContext>(0);
}

std::vector<MongodbCmdParser::Binary_expressionContext *> MongodbCmdParser::Binary_expressionContext::binary_expression() {
  return getRuleContexts<MongodbCmdParser::Binary_expressionContext>();
}

MongodbCmdParser::Binary_expressionContext* MongodbCmdParser::Binary_expressionContext::binary_expression(size_t i) {
  return getRuleContext<MongodbCmdParser::Binary_expressionContext>(i);
}

MongodbCmdParser::Binary_operatorContext* MongodbCmdParser::Binary_expressionContext::binary_operator() {
  return getRuleContext<MongodbCmdParser::Binary_operatorContext>(0);
}


size_t MongodbCmdParser::Binary_expressionContext::getRuleIndex() const {
  return MongodbCmdParser::RuleBinary_expression;
}

void MongodbCmdParser::Binary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_expression(this);
}

void MongodbCmdParser::Binary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_expression(this);
}


antlrcpp::Any MongodbCmdParser::Binary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitBinary_expression(this);
  else
    return visitor->visitChildren(this);
}


MongodbCmdParser::Binary_expressionContext* MongodbCmdParser::binary_expression() {
   return binary_expression(0);
}

MongodbCmdParser::Binary_expressionContext* MongodbCmdParser::binary_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MongodbCmdParser::Binary_expressionContext *_localctx = _tracker.createInstance<Binary_expressionContext>(_ctx, parentState);
  MongodbCmdParser::Binary_expressionContext *previousContext = _localctx;
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, MongodbCmdParser::RuleBinary_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(214);
    unary_expression();
    _ctx->stop = _input->LT(-1);
    setState(222);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Binary_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBinary_expression);
        setState(216);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(217);
        binary_operator();
        setState(218);
        binary_expression(2); 
      }
      setState(224);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Binary_operatorContext ------------------------------------------------------------------

MongodbCmdParser::Binary_operatorContext::Binary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::Binary_operatorContext::MULTI() {
  return getToken(MongodbCmdParser::MULTI, 0);
}

tree::TerminalNode* MongodbCmdParser::Binary_operatorContext::DIV() {
  return getToken(MongodbCmdParser::DIV, 0);
}

tree::TerminalNode* MongodbCmdParser::Binary_operatorContext::PLUS() {
  return getToken(MongodbCmdParser::PLUS, 0);
}

tree::TerminalNode* MongodbCmdParser::Binary_operatorContext::MINUS() {
  return getToken(MongodbCmdParser::MINUS, 0);
}


size_t MongodbCmdParser::Binary_operatorContext::getRuleIndex() const {
  return MongodbCmdParser::RuleBinary_operator;
}

void MongodbCmdParser::Binary_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_operator(this);
}

void MongodbCmdParser::Binary_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_operator(this);
}


antlrcpp::Any MongodbCmdParser::Binary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitBinary_operator(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Binary_operatorContext* MongodbCmdParser::binary_operator() {
  Binary_operatorContext *_localctx = _tracker.createInstance<Binary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 42, MongodbCmdParser::RuleBinary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MongodbCmdParser::PLUS)
      | (1ULL << MongodbCmdParser::MINUS)
      | (1ULL << MongodbCmdParser::MULTI)
      | (1ULL << MongodbCmdParser::DIV))) != 0))) {
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

//----------------- Unary_expressionContext ------------------------------------------------------------------

MongodbCmdParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MongodbCmdParser::Unary_expressionContext* MongodbCmdParser::Unary_expressionContext::unary_expression() {
  return getRuleContext<MongodbCmdParser::Unary_expressionContext>(0);
}

tree::TerminalNode* MongodbCmdParser::Unary_expressionContext::PLUS() {
  return getToken(MongodbCmdParser::PLUS, 0);
}

tree::TerminalNode* MongodbCmdParser::Unary_expressionContext::MINUS() {
  return getToken(MongodbCmdParser::MINUS, 0);
}

tree::TerminalNode* MongodbCmdParser::Unary_expressionContext::INVERT() {
  return getToken(MongodbCmdParser::INVERT, 0);
}

tree::TerminalNode* MongodbCmdParser::Unary_expressionContext::LPAREN() {
  return getToken(MongodbCmdParser::LPAREN, 0);
}

MongodbCmdParser::General_expressionContext* MongodbCmdParser::Unary_expressionContext::general_expression() {
  return getRuleContext<MongodbCmdParser::General_expressionContext>(0);
}

tree::TerminalNode* MongodbCmdParser::Unary_expressionContext::RPAREN() {
  return getToken(MongodbCmdParser::RPAREN, 0);
}

MongodbCmdParser::ConstantContext* MongodbCmdParser::Unary_expressionContext::constant() {
  return getRuleContext<MongodbCmdParser::ConstantContext>(0);
}


size_t MongodbCmdParser::Unary_expressionContext::getRuleIndex() const {
  return MongodbCmdParser::RuleUnary_expression;
}

void MongodbCmdParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void MongodbCmdParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}


antlrcpp::Any MongodbCmdParser::Unary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitUnary_expression(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::Unary_expressionContext* MongodbCmdParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 44, MongodbCmdParser::RuleUnary_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(234);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MongodbCmdParser::PLUS:
      case MongodbCmdParser::MINUS:
      case MongodbCmdParser::INVERT: {
        enterOuterAlt(_localctx, 1);
        setState(227);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MongodbCmdParser::PLUS)
          | (1ULL << MongodbCmdParser::MINUS)
          | (1ULL << MongodbCmdParser::INVERT))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(228);
        unary_expression();
        break;
      }

      case MongodbCmdParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(229);
        match(MongodbCmdParser::LPAREN);
        setState(230);
        general_expression(0);
        setState(231);
        match(MongodbCmdParser::RPAREN);
        break;
      }

      case MongodbCmdParser::M_TRUE:
      case MongodbCmdParser::M_FALSE:
      case MongodbCmdParser::UNSIGNED_INTEGER:
      case MongodbCmdParser::APPROXIMATE_NUM:
      case MongodbCmdParser::M_STRINGS:
      case MongodbCmdParser::REGEX_STRINGS: {
        enterOuterAlt(_localctx, 3);
        setState(233);
        constant();
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

//----------------- ConstantContext ------------------------------------------------------------------

MongodbCmdParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MongodbCmdParser::ConstantContext::UNSIGNED_INTEGER() {
  return getToken(MongodbCmdParser::UNSIGNED_INTEGER, 0);
}

MongodbCmdParser::Scientific_numContext* MongodbCmdParser::ConstantContext::scientific_num() {
  return getRuleContext<MongodbCmdParser::Scientific_numContext>(0);
}

tree::TerminalNode* MongodbCmdParser::ConstantContext::M_STRINGS() {
  return getToken(MongodbCmdParser::M_STRINGS, 0);
}

tree::TerminalNode* MongodbCmdParser::ConstantContext::M_TRUE() {
  return getToken(MongodbCmdParser::M_TRUE, 0);
}

tree::TerminalNode* MongodbCmdParser::ConstantContext::M_FALSE() {
  return getToken(MongodbCmdParser::M_FALSE, 0);
}

tree::TerminalNode* MongodbCmdParser::ConstantContext::REGEX_STRINGS() {
  return getToken(MongodbCmdParser::REGEX_STRINGS, 0);
}


size_t MongodbCmdParser::ConstantContext::getRuleIndex() const {
  return MongodbCmdParser::RuleConstant;
}

void MongodbCmdParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void MongodbCmdParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MongodbCmdParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any MongodbCmdParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MongodbCmdParserVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

MongodbCmdParser::ConstantContext* MongodbCmdParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 46, MongodbCmdParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(242);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MongodbCmdParser::UNSIGNED_INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(236);
        match(MongodbCmdParser::UNSIGNED_INTEGER);
        break;
      }

      case MongodbCmdParser::APPROXIMATE_NUM: {
        enterOuterAlt(_localctx, 2);
        setState(237);
        scientific_num();
        break;
      }

      case MongodbCmdParser::M_STRINGS: {
        enterOuterAlt(_localctx, 3);
        setState(238);
        match(MongodbCmdParser::M_STRINGS);
        break;
      }

      case MongodbCmdParser::M_TRUE: {
        enterOuterAlt(_localctx, 4);
        setState(239);
        match(MongodbCmdParser::M_TRUE);
        break;
      }

      case MongodbCmdParser::M_FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(240);
        match(MongodbCmdParser::M_FALSE);
        break;
      }

      case MongodbCmdParser::REGEX_STRINGS: {
        enterOuterAlt(_localctx, 6);
        setState(241);
        match(MongodbCmdParser::REGEX_STRINGS);
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

bool MongodbCmdParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return general_expressionSempred(dynamic_cast<General_expressionContext *>(context), predicateIndex);
    case 18: return relational_expressionSempred(dynamic_cast<Relational_expressionContext *>(context), predicateIndex);
    case 20: return binary_expressionSempred(dynamic_cast<Binary_expressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MongodbCmdParser::general_expressionSempred(General_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool MongodbCmdParser::relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool MongodbCmdParser::binary_expressionSempred(Binary_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MongodbCmdParser::_decisionToDFA;
atn::PredictionContextCache MongodbCmdParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MongodbCmdParser::_atn;
std::vector<uint16_t> MongodbCmdParser::_serializedATN;

std::vector<std::string> MongodbCmdParser::_ruleNames = {
  "stmt", "command_function", "use_stmt", "db_name", "function_name", "arguments", 
  "marray", "mlist", "key_value", "mkey", "mvalue", "scientific_num", "function_call", 
  "func_args", "func_arg", "js_stmts", "js_function_body", "general_expression", 
  "relational_expression", "relational_operator", "binary_expression", "binary_operator", 
  "unary_expression", "constant"
};

std::vector<std::string> MongodbCmdParser::_literalNames = {
  "", "", "'true'", "'false'", "'new'", "'function'", "'runCommand'", "'adminCommand'", 
  "'use'", "", "", "", "", "", "", "", "", "'.'", "'$'", "'_'", "':'", "'('", 
  "')'", "'['", "']'", "'{'", "'}'", "','", "';'", "'+'", "'-'", "'*'", 
  "'/'", "'>'", "'<'", "'='", "'>='", "'<='", "'!='", "'&'", "'|'", "'!'", 
  "'^'", "'~'", "'<<'", "'>>'"
};

std::vector<std::string> MongodbCmdParser::_symbolicNames = {
  "", "M_E", "M_TRUE", "M_FALSE", "M_NEW", "M_FUNCTION", "RUNCOMMAND", "ADMINCOMMAND", 
  "M_USE", "UNSIGNED_INTEGER", "APPROXIMATE_NUM", "MONGO_OPERATORS", "IDENTIFIER", 
  "ID_START_WITH_UNDERLINE", "M_STRINGS", "BACK_SLASH_STRINGS", "REGEX_STRINGS", 
  "DOT", "DOLLAR", "UNDERLINE", "COLON", "LPAREN", "RPAREN", "LBRACKET", 
  "RBRACKET", "LBRACE", "RBRACE", "COMMA", "SEMI", "PLUS", "MINUS", "MULTI", 
  "DIV", "GT", "LT", "EQ", "GE", "LE", "NE", "AND", "OR", "NOT", "XOR", 
  "INVERT", "LSHIFT", "RSHIFT", "SPACES"
};

dfa::Vocabulary MongodbCmdParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MongodbCmdParser::_tokenNames;

MongodbCmdParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x30, 0xf7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x36, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x39, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x44, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x47, 0xb, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x4a, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x5b, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x5e, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x66, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x69, 0xb, 0x9, 
    0x5, 0x9, 0x6b, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x80, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x87, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0x8a, 0xa, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x8f, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x92, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x97, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x9e, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0xa5, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x6, 0x12, 0xb8, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0xb9, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xc0, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xc5, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0xc8, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xd1, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0xd4, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xdf, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0xe2, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
    0x18, 0xed, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0xf5, 0xa, 0x19, 0x3, 0x19, 0x2, 0x5, 0x24, 
    0x26, 0x2a, 0x1a, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x2, 0x9, 0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 
    0xd, 0x10, 0x3, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x23, 0x28, 0x3, 0x2, 0x1f, 
    0x22, 0x4, 0x2, 0x1f, 0x20, 0x2d, 0x2d, 0x2, 0x112, 0x2, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x50, 0x3, 0x2, 0x2, 0x2, 0xa, 0x52, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0xe, 0x56, 0x3, 0x2, 0x2, 0x2, 0x10, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x96, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x24, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x32, 0x37, 0x5, 0x8, 
    0x5, 0x2, 0x33, 0x34, 0x7, 0x13, 0x2, 0x2, 0x34, 0x36, 0x5, 0x1a, 0xe, 
    0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 
    0x7, 0x13, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x4, 0x3, 0x2, 0x3c, 0x3d, 0x7, 
    0x17, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0xc, 0x7, 0x2, 0x3e, 0x3f, 0x7, 0x18, 
    0x2, 0x2, 0x3f, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x45, 0x5, 0x8, 0x5, 
    0x2, 0x41, 0x42, 0x7, 0x13, 0x2, 0x2, 0x42, 0x44, 0x5, 0x1a, 0xe, 0x2, 
    0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x47, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 0x5, 
    0x6, 0x4, 0x2, 0x49, 0x32, 0x3, 0x2, 0x2, 0x2, 0x49, 0x40, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4c, 0x9, 0x2, 0x2, 0x2, 0x4c, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4e, 0x7, 0xa, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x8, 0x5, 0x2, 0x4f, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0xe, 0x2, 0x2, 0x51, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x9, 0x3, 0x2, 0x2, 0x53, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x55, 0x5, 0x10, 0x9, 0x2, 0x55, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x7, 0x19, 0x2, 0x2, 0x57, 0x5c, 0x5, 0x16, 0xc, 
    0x2, 0x58, 0x59, 0x7, 0x1d, 0x2, 0x2, 0x59, 0x5b, 0x5, 0x16, 0xc, 0x2, 
    0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 
    0x1a, 0x2, 0x2, 0x60, 0xf, 0x3, 0x2, 0x2, 0x2, 0x61, 0x6a, 0x7, 0x1b, 
    0x2, 0x2, 0x62, 0x67, 0x5, 0x12, 0xa, 0x2, 0x63, 0x64, 0x7, 0x1d, 0x2, 
    0x2, 0x64, 0x66, 0x5, 0x12, 0xa, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x62, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x1c, 
    0x2, 0x2, 0x6d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x14, 0xb, 
    0x2, 0x6f, 0x70, 0x7, 0x16, 0x2, 0x2, 0x70, 0x71, 0x5, 0x16, 0xc, 0x2, 
    0x71, 0x13, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x9, 0x4, 0x2, 0x2, 0x73, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x74, 0x80, 0x5, 0x18, 0xd, 0x2, 0x75, 0x80, 
    0x7, 0x10, 0x2, 0x2, 0x76, 0x80, 0x7, 0xb, 0x2, 0x2, 0x77, 0x80, 0x5, 
    0xe, 0x8, 0x2, 0x78, 0x80, 0x5, 0x10, 0x9, 0x2, 0x79, 0x80, 0x7, 0x12, 
    0x2, 0x2, 0x7a, 0x80, 0x7, 0x4, 0x2, 0x2, 0x7b, 0x80, 0x7, 0x5, 0x2, 
    0x2, 0x7c, 0x80, 0x5, 0x1a, 0xe, 0x2, 0x7d, 0x80, 0x5, 0x20, 0x11, 0x2, 
    0x7e, 0x80, 0x5, 0x24, 0x13, 0x2, 0x7f, 0x74, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x82, 0x7, 0xc, 0x2, 0x2, 0x82, 0x19, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x89, 0x5, 0xa, 0x6, 0x2, 0x84, 0x86, 0x7, 0x17, 0x2, 0x2, 0x85, 0x87, 
    0x5, 0x1c, 0xf, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x7, 0x18, 
    0x2, 0x2, 0x89, 0x84, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x90, 0x5, 0x1e, 0x10, 0x2, 
    0x8c, 0x8d, 0x7, 0x1d, 0x2, 0x2, 0x8d, 0x8f, 0x5, 0x1e, 0x10, 0x2, 0x8e, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x97, 0x7, 0xe, 
    0x2, 0x2, 0x94, 0x97, 0x7, 0xf, 0x2, 0x2, 0x95, 0x97, 0x5, 0x16, 0xc, 
    0x2, 0x96, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x7, 0x6, 0x2, 0x2, 0x99, 0xa5, 0x5, 0x1a, 0xe, 0x2, 0x9a, 0x9b, 
    0x7, 0x7, 0x2, 0x2, 0x9b, 0x9d, 0x7, 0x17, 0x2, 0x2, 0x9c, 0x9e, 0x5, 
    0x1c, 0xf, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x18, 0x2, 
    0x2, 0xa0, 0xa1, 0x7, 0x1b, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x22, 0x12, 0x2, 
    0xa2, 0xa3, 0x7, 0x1c, 0x2, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xb8, 0x7, 0x13, 0x2, 0x2, 0xa7, 0xb8, 0x7, 
    0xe, 0x2, 0x2, 0xa8, 0xb8, 0x7, 0xf, 0x2, 0x2, 0xa9, 0xb8, 0x7, 0x11, 
    0x2, 0x2, 0xaa, 0xb8, 0x7, 0xb, 0x2, 0x2, 0xab, 0xb8, 0x5, 0x18, 0xd, 
    0x2, 0xac, 0xb8, 0x7, 0x17, 0x2, 0x2, 0xad, 0xb8, 0x7, 0x18, 0x2, 0x2, 
    0xae, 0xb8, 0x7, 0x1b, 0x2, 0x2, 0xaf, 0xb8, 0x7, 0x1c, 0x2, 0x2, 0xb0, 
    0xb8, 0x7, 0x1e, 0x2, 0x2, 0xb1, 0xb8, 0x7, 0x1d, 0x2, 0x2, 0xb2, 0xb8, 
    0x7, 0x14, 0x2, 0x2, 0xb3, 0xb8, 0x7, 0x25, 0x2, 0x2, 0xb4, 0xb8, 0x7, 
    0x23, 0x2, 0x2, 0xb5, 0xb8, 0x7, 0x24, 0x2, 0x2, 0xb6, 0xb8, 0x7, 0x10, 
    0x2, 0x2, 0xb7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0x23, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 
    0x8, 0x13, 0x1, 0x2, 0xbc, 0xc0, 0x5, 0x26, 0x14, 0x2, 0xbd, 0xbe, 0x7, 
    0x2b, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0x24, 0x13, 0x4, 0xbf, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc2, 0xc, 0x3, 0x2, 0x2, 0xc2, 0xc3, 0x9, 0x5, 0x2, 0x2, 
    0xc3, 0xc5, 0x5, 0x24, 0x13, 0x4, 0xc4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0x25, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x8, 0x14, 0x1, 0x2, 0xca, 0xcb, 0x5, 0x2a, 
    0x16, 0x2, 0xcb, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0xc, 0x4, 0x2, 
    0x2, 0xcd, 0xce, 0x5, 0x28, 0x15, 0x2, 0xce, 0xcf, 0x5, 0x26, 0x14, 
    0x5, 0xcf, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0x27, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x9, 0x6, 0x2, 0x2, 0xd6, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0xd7, 0xd8, 0x8, 0x16, 0x1, 0x2, 0xd8, 0xd9, 0x5, 0x2e, 
    0x18, 0x2, 0xd9, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0xc, 0x3, 0x2, 
    0x2, 0xdb, 0xdc, 0x5, 0x2c, 0x17, 0x2, 0xdc, 0xdd, 0x5, 0x2a, 0x16, 
    0x4, 0xdd, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xde, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x9, 0x7, 0x2, 0x2, 0xe4, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x9, 0x8, 0x2, 0x2, 0xe6, 0xed, 0x5, 0x2e, 
    0x18, 0x2, 0xe7, 0xe8, 0x7, 0x17, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x24, 0x13, 
    0x2, 0xe9, 0xea, 0x7, 0x18, 0x2, 0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xeb, 0xed, 0x5, 0x30, 0x19, 0x2, 0xec, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xe7, 0x3, 0x2, 0x2, 0x2, 0xec, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xf5, 0x7, 0xb, 0x2, 0x2, 0xef, 0xf5, 0x5, 
    0x18, 0xd, 0x2, 0xf0, 0xf5, 0x7, 0x10, 0x2, 0x2, 0xf1, 0xf5, 0x7, 0x4, 
    0x2, 0x2, 0xf2, 0xf5, 0x7, 0x5, 0x2, 0x2, 0xf3, 0xf5, 0x7, 0x12, 0x2, 
    0x2, 0xf4, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x37, 0x45, 0x49, 0x5c, 0x67, 0x6a, 0x7f, 
    0x86, 0x89, 0x90, 0x96, 0x9d, 0xa4, 0xb7, 0xb9, 0xbf, 0xc6, 0xd2, 0xe0, 
    0xec, 0xf4, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MongodbCmdParser::Initializer MongodbCmdParser::_init;
