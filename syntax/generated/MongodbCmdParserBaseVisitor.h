
// Generated from MongodbCmdParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MongodbCmdParserVisitor.h"


namespace mongodbcmd {

/**
 * This class provides an empty implementation of MongodbCmdParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MongodbCmdParserBaseVisitor : public MongodbCmdParserVisitor {
public:

  virtual antlrcpp::Any visitStmt(MongodbCmdParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand_function(MongodbCmdParser::Command_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_stmt(MongodbCmdParser::Use_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb_name(MongodbCmdParser::Db_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name(MongodbCmdParser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(MongodbCmdParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMarray(MongodbCmdParser::MarrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMlist(MongodbCmdParser::MlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey_value(MongodbCmdParser::Key_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMkey(MongodbCmdParser::MkeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMvalue(MongodbCmdParser::MvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScientific_num(MongodbCmdParser::Scientific_numContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(MongodbCmdParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_args(MongodbCmdParser::Func_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_arg(MongodbCmdParser::Func_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJs_stmts(MongodbCmdParser::Js_stmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJs_function_body(MongodbCmdParser::Js_function_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_expression(MongodbCmdParser::General_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_expression(MongodbCmdParser::Relational_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_operator(MongodbCmdParser::Relational_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_expression(MongodbCmdParser::Binary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_operator(MongodbCmdParser::Binary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expression(MongodbCmdParser::Unary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(MongodbCmdParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace mongodbcmd
