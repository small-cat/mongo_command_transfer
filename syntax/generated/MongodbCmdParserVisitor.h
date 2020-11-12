
// Generated from MongodbCmdParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MongodbCmdParser.h"


namespace mongodbcmd {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MongodbCmdParser.
 */
class  MongodbCmdParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MongodbCmdParser.
   */
    virtual antlrcpp::Any visitStmt(MongodbCmdParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitCommand_function(MongodbCmdParser::Command_functionContext *context) = 0;

    virtual antlrcpp::Any visitUse_stmt(MongodbCmdParser::Use_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDb_name(MongodbCmdParser::Db_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(MongodbCmdParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitArguments(MongodbCmdParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitMarray(MongodbCmdParser::MarrayContext *context) = 0;

    virtual antlrcpp::Any visitMlist(MongodbCmdParser::MlistContext *context) = 0;

    virtual antlrcpp::Any visitKey_value(MongodbCmdParser::Key_valueContext *context) = 0;

    virtual antlrcpp::Any visitMkey(MongodbCmdParser::MkeyContext *context) = 0;

    virtual antlrcpp::Any visitMvalue(MongodbCmdParser::MvalueContext *context) = 0;

    virtual antlrcpp::Any visitScientific_num(MongodbCmdParser::Scientific_numContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(MongodbCmdParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitFunc_args(MongodbCmdParser::Func_argsContext *context) = 0;

    virtual antlrcpp::Any visitFunc_arg(MongodbCmdParser::Func_argContext *context) = 0;

    virtual antlrcpp::Any visitJs_stmts(MongodbCmdParser::Js_stmtsContext *context) = 0;

    virtual antlrcpp::Any visitJs_function_body(MongodbCmdParser::Js_function_bodyContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_expression(MongodbCmdParser::General_expressionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_expression(MongodbCmdParser::Relational_expressionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_operator(MongodbCmdParser::Relational_operatorContext *context) = 0;

    virtual antlrcpp::Any visitBinary_expression(MongodbCmdParser::Binary_expressionContext *context) = 0;

    virtual antlrcpp::Any visitBinary_operator(MongodbCmdParser::Binary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expression(MongodbCmdParser::Unary_expressionContext *context) = 0;

    virtual antlrcpp::Any visitConstant(MongodbCmdParser::ConstantContext *context) = 0;


};

}  // namespace mongodbcmd
