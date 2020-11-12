
// Generated from MongodbCmdParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MongodbCmdParser.h"


namespace mongodbcmd {

/**
 * This interface defines an abstract listener for a parse tree produced by MongodbCmdParser.
 */
class  MongodbCmdParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmt(MongodbCmdParser::StmtContext *ctx) = 0;
  virtual void exitStmt(MongodbCmdParser::StmtContext *ctx) = 0;

  virtual void enterCommand_function(MongodbCmdParser::Command_functionContext *ctx) = 0;
  virtual void exitCommand_function(MongodbCmdParser::Command_functionContext *ctx) = 0;

  virtual void enterUse_stmt(MongodbCmdParser::Use_stmtContext *ctx) = 0;
  virtual void exitUse_stmt(MongodbCmdParser::Use_stmtContext *ctx) = 0;

  virtual void enterDb_name(MongodbCmdParser::Db_nameContext *ctx) = 0;
  virtual void exitDb_name(MongodbCmdParser::Db_nameContext *ctx) = 0;

  virtual void enterFunction_name(MongodbCmdParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(MongodbCmdParser::Function_nameContext *ctx) = 0;

  virtual void enterArguments(MongodbCmdParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(MongodbCmdParser::ArgumentsContext *ctx) = 0;

  virtual void enterMarray(MongodbCmdParser::MarrayContext *ctx) = 0;
  virtual void exitMarray(MongodbCmdParser::MarrayContext *ctx) = 0;

  virtual void enterMlist(MongodbCmdParser::MlistContext *ctx) = 0;
  virtual void exitMlist(MongodbCmdParser::MlistContext *ctx) = 0;

  virtual void enterKey_value(MongodbCmdParser::Key_valueContext *ctx) = 0;
  virtual void exitKey_value(MongodbCmdParser::Key_valueContext *ctx) = 0;

  virtual void enterMkey(MongodbCmdParser::MkeyContext *ctx) = 0;
  virtual void exitMkey(MongodbCmdParser::MkeyContext *ctx) = 0;

  virtual void enterMvalue(MongodbCmdParser::MvalueContext *ctx) = 0;
  virtual void exitMvalue(MongodbCmdParser::MvalueContext *ctx) = 0;

  virtual void enterScientific_num(MongodbCmdParser::Scientific_numContext *ctx) = 0;
  virtual void exitScientific_num(MongodbCmdParser::Scientific_numContext *ctx) = 0;

  virtual void enterFunction_call(MongodbCmdParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(MongodbCmdParser::Function_callContext *ctx) = 0;

  virtual void enterFunc_args(MongodbCmdParser::Func_argsContext *ctx) = 0;
  virtual void exitFunc_args(MongodbCmdParser::Func_argsContext *ctx) = 0;

  virtual void enterFunc_arg(MongodbCmdParser::Func_argContext *ctx) = 0;
  virtual void exitFunc_arg(MongodbCmdParser::Func_argContext *ctx) = 0;

  virtual void enterJs_stmts(MongodbCmdParser::Js_stmtsContext *ctx) = 0;
  virtual void exitJs_stmts(MongodbCmdParser::Js_stmtsContext *ctx) = 0;

  virtual void enterJs_function_body(MongodbCmdParser::Js_function_bodyContext *ctx) = 0;
  virtual void exitJs_function_body(MongodbCmdParser::Js_function_bodyContext *ctx) = 0;

  virtual void enterGeneral_expression(MongodbCmdParser::General_expressionContext *ctx) = 0;
  virtual void exitGeneral_expression(MongodbCmdParser::General_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(MongodbCmdParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(MongodbCmdParser::Relational_expressionContext *ctx) = 0;

  virtual void enterRelational_operator(MongodbCmdParser::Relational_operatorContext *ctx) = 0;
  virtual void exitRelational_operator(MongodbCmdParser::Relational_operatorContext *ctx) = 0;

  virtual void enterBinary_expression(MongodbCmdParser::Binary_expressionContext *ctx) = 0;
  virtual void exitBinary_expression(MongodbCmdParser::Binary_expressionContext *ctx) = 0;

  virtual void enterBinary_operator(MongodbCmdParser::Binary_operatorContext *ctx) = 0;
  virtual void exitBinary_operator(MongodbCmdParser::Binary_operatorContext *ctx) = 0;

  virtual void enterUnary_expression(MongodbCmdParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(MongodbCmdParser::Unary_expressionContext *ctx) = 0;

  virtual void enterConstant(MongodbCmdParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(MongodbCmdParser::ConstantContext *ctx) = 0;


};

}  // namespace mongodbcmd
