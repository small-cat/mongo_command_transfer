#ifndef __GET_OPERATE_INFO_VISITOR_H__
#define __GET_OPERATE_INFO_VISITOR_H__

#include "../syntax/generated/MongodbCmdParser.h"
#include "../syntax/generated/MongodbCmdParserBaseVisitor.h"

#include "ast/value.hpp"
#include "ast/integer_value.h"
#include "ast/float_value.h"
#include "ast/array_value.h"
#include "ast/list_value.h"
#include "ast/strings_value.h"
#include "ast/map_value.h"
#include "ast/function_def.h"


namespace mongo_parser {
class GetOperateInfoVisitor : public mongodbcmd::MongodbCmdParserBaseVisitor {
public:
  GetOperateInfoVisitor(mongodbcmd::MongodbCmdParser* parser);
  virtual ~GetOperateInfoVisitor();

  antlrcpp::Any visitStmt(mongodbcmd::MongodbCmdParser::StmtContext* ctx);
  antlrcpp::Any visitFunction_call(mongodbcmd::MongodbCmdParser::Function_callContext* ctx);
  // antlrcpp::Any visitFunc_args(mongodbcmd::MongodbCmdParser::Func_argsContext* ctx);
  antlrcpp::Any visitFunc_arg(mongodbcmd::MongodbCmdParser::Func_argContext* ctx);

  // only go into list and array, other value in mvalue get its text directly
  antlrcpp::Any visitArguments(mongodbcmd::MongodbCmdParser::ArgumentsContext* ctx);
  antlrcpp::Any visitMlist(mongodbcmd::MongodbCmdParser::MlistContext* ctx);
  // antlrcpp::Any visitKey_value(mongodbcmd::MongodbCmdParser::Key_valueContext* ctx);
  antlrcpp::Any visitMvalue(mongodbcmd::MongodbCmdParser::MvalueContext* ctx);
  antlrcpp::Any visitMarray(mongodbcmd::MongodbCmdParser::MarrayContext* ctx);

  std::vector<FunctionDef*> functions();
private:
  mongodbcmd::MongodbCmdParser* parser_;
  antlr4::TokenStream* tokens_;

  std::vector<FunctionDef*> functions_;
};
} /* end mongo_parser */

#endif /* __GET_OPERATE_INFO_VISITOR_H__ */
