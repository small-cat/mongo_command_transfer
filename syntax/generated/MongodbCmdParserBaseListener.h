
// Generated from MongodbCmdParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MongodbCmdParserListener.h"


namespace mongodbcmd {

/**
 * This class provides an empty implementation of MongodbCmdParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MongodbCmdParserBaseListener : public MongodbCmdParserListener {
public:

  virtual void enterStmt(MongodbCmdParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(MongodbCmdParser::StmtContext * /*ctx*/) override { }

  virtual void enterCommand_function(MongodbCmdParser::Command_functionContext * /*ctx*/) override { }
  virtual void exitCommand_function(MongodbCmdParser::Command_functionContext * /*ctx*/) override { }

  virtual void enterUse_stmt(MongodbCmdParser::Use_stmtContext * /*ctx*/) override { }
  virtual void exitUse_stmt(MongodbCmdParser::Use_stmtContext * /*ctx*/) override { }

  virtual void enterDb_name(MongodbCmdParser::Db_nameContext * /*ctx*/) override { }
  virtual void exitDb_name(MongodbCmdParser::Db_nameContext * /*ctx*/) override { }

  virtual void enterFunction_name(MongodbCmdParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(MongodbCmdParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterArguments(MongodbCmdParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(MongodbCmdParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterMarray(MongodbCmdParser::MarrayContext * /*ctx*/) override { }
  virtual void exitMarray(MongodbCmdParser::MarrayContext * /*ctx*/) override { }

  virtual void enterMlist(MongodbCmdParser::MlistContext * /*ctx*/) override { }
  virtual void exitMlist(MongodbCmdParser::MlistContext * /*ctx*/) override { }

  virtual void enterKey_value(MongodbCmdParser::Key_valueContext * /*ctx*/) override { }
  virtual void exitKey_value(MongodbCmdParser::Key_valueContext * /*ctx*/) override { }

  virtual void enterMkey(MongodbCmdParser::MkeyContext * /*ctx*/) override { }
  virtual void exitMkey(MongodbCmdParser::MkeyContext * /*ctx*/) override { }

  virtual void enterMvalue(MongodbCmdParser::MvalueContext * /*ctx*/) override { }
  virtual void exitMvalue(MongodbCmdParser::MvalueContext * /*ctx*/) override { }

  virtual void enterScientific_num(MongodbCmdParser::Scientific_numContext * /*ctx*/) override { }
  virtual void exitScientific_num(MongodbCmdParser::Scientific_numContext * /*ctx*/) override { }

  virtual void enterFunction_call(MongodbCmdParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(MongodbCmdParser::Function_callContext * /*ctx*/) override { }

  virtual void enterFunc_args(MongodbCmdParser::Func_argsContext * /*ctx*/) override { }
  virtual void exitFunc_args(MongodbCmdParser::Func_argsContext * /*ctx*/) override { }

  virtual void enterFunc_arg(MongodbCmdParser::Func_argContext * /*ctx*/) override { }
  virtual void exitFunc_arg(MongodbCmdParser::Func_argContext * /*ctx*/) override { }

  virtual void enterJs_stmts(MongodbCmdParser::Js_stmtsContext * /*ctx*/) override { }
  virtual void exitJs_stmts(MongodbCmdParser::Js_stmtsContext * /*ctx*/) override { }

  virtual void enterJs_function_body(MongodbCmdParser::Js_function_bodyContext * /*ctx*/) override { }
  virtual void exitJs_function_body(MongodbCmdParser::Js_function_bodyContext * /*ctx*/) override { }

  virtual void enterGeneral_expression(MongodbCmdParser::General_expressionContext * /*ctx*/) override { }
  virtual void exitGeneral_expression(MongodbCmdParser::General_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(MongodbCmdParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(MongodbCmdParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_operator(MongodbCmdParser::Relational_operatorContext * /*ctx*/) override { }
  virtual void exitRelational_operator(MongodbCmdParser::Relational_operatorContext * /*ctx*/) override { }

  virtual void enterBinary_expression(MongodbCmdParser::Binary_expressionContext * /*ctx*/) override { }
  virtual void exitBinary_expression(MongodbCmdParser::Binary_expressionContext * /*ctx*/) override { }

  virtual void enterBinary_operator(MongodbCmdParser::Binary_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_operator(MongodbCmdParser::Binary_operatorContext * /*ctx*/) override { }

  virtual void enterUnary_expression(MongodbCmdParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(MongodbCmdParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterConstant(MongodbCmdParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(MongodbCmdParser::ConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace mongodbcmd
