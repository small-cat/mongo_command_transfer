#include "get_operate_info_visitor.h"

namespace mongo_parser {

using mongodbcmd::MongodbCmdParser;

GetOperateInfoVisitor::GetOperateInfoVisitor(MongodbCmdParser* parser) : parser_(parser) {
  tokens_ = parser_->getTokenStream();
}

GetOperateInfoVisitor::~GetOperateInfoVisitor() {
  for (auto& func : functions_) {
    delete func;
  }

  functions_.clear();
}

/**
 * @fn visitStmt
 * @brief get functions_ from function_call
 * @param 
 * @author Jona
 * @date 04/11/2020 11:35:11 
*/ 
antlrcpp::Any GetOperateInfoVisitor::visitStmt(MongodbCmdParser::StmtContext* ctx) {
  auto func_calls = ctx->function_call();
  for (auto& func_call : func_calls) {
    auto f = visit(func_call);
    functions_.push_back((FunctionDef*)f);
  }

  auto args_ctx = ctx->arguments();
  if (args_ctx) {
    return visit(args_ctx);
  } else {
    return (antlrcpp::Any)((Value*)(new ListValue()));
  }
}

antlrcpp::Any GetOperateInfoVisitor::visitFunction_call(MongodbCmdParser::Function_callContext* ctx) {
  auto func_name_ctx = ctx->function_name();
  auto args_ctx = ctx->func_args();

  FunctionDef* fd = new FunctionDef(tokens_->getText(func_name_ctx));
  if (args_ctx) {
    auto arg_list_ctx = args_ctx->func_arg();
    for (auto& arg : arg_list_ctx) {
      Value* val = (Value*)visit(arg);
      fd->AddArg(val);
    }
  }

  return (antlrcpp::Any)fd;
}

antlrcpp::Any GetOperateInfoVisitor::visitFunc_arg(MongodbCmdParser::Func_argContext* ctx) {
  auto ident_ctx = ctx->IDENTIFIER();
  auto id_under_ctx = ctx->ID_START_WITH_UNDERLINE();
  auto mvalue_ctx = ctx->mvalue();

  Value* val;
  if (ident_ctx) {
    val = new StringsValue(ident_ctx->getText());
  } else if (id_under_ctx) {
    val = new StringsValue(id_under_ctx->getText());
  } else if (mvalue_ctx) {
    return visit(mvalue_ctx);
  }

  return (antlrcpp::Any)val;
}

antlrcpp::Any GetOperateInfoVisitor::visitMvalue(MongodbCmdParser::MvalueContext* ctx) {
  auto integer_ctx = ctx->UNSIGNED_INTEGER();
  auto array_ctx = ctx->marray();
  auto list_ctx = ctx->mlist();

  std::string real_val = tokens_->getText(ctx);;
  Value* val;

  if (integer_ctx) {
    long long_val = std::atol(real_val.c_str());
    val = new IntegerValue(long_val);

  } else if (array_ctx) {
    return visit(array_ctx);

  } else if (list_ctx) {
    return visit(list_ctx);

  } else {
    // other branches, regard as StringsValue
    val = new StringsValue(real_val);
  }

  return (antlrcpp::Any)val;
}

antlrcpp::Any GetOperateInfoVisitor::visitMarray(MongodbCmdParser::MarrayContext* ctx) {
  auto mvalues_ctx = ctx->mvalue();
  ArrayValue* val = new ArrayValue();

  for (auto& mval : mvalues_ctx) {
    Value* tmp_val = (Value*)visit(mval);
    val->AddValue(tmp_val);
  }

  return (antlrcpp::Any)((Value*)val);
}

antlrcpp::Any GetOperateInfoVisitor::visitMlist(MongodbCmdParser::MlistContext* ctx) {
  auto key_values_ctx = ctx->key_value();
  ListValue* val = new ListValue();

  for (auto& kv : key_values_ctx) {
    std::string mkey = tokens_->getText(kv->mkey());
    auto mval_ctx = kv->mvalue();
    Value* mval = (Value*)visit(mval_ctx);
    val->AddValue(mkey, mval);
  }

  return (antlrcpp::Any)((Value*)val);
}

/*
antlrcpp::Any GetOperateInfoVisitor::visitKey_value(MongodbCmdParser::Key_valueContext* ctx) {
  auto key_ctx = ctx->mkey();
  auto value_ctx = ctx->mvalue();

  std::string key_str = tokens_->getText(key_ctx);
  Value* val = (Value*)visit(value_ctx);
  return (antlrcpp::Any)(new MapValue(key_str, val));
}
*/

antlrcpp::Any GetOperateInfoVisitor::visitArguments(MongodbCmdParser::ArgumentsContext* ctx) {
  return visit(ctx->mlist());
}

std::vector<FunctionDef*> GetOperateInfoVisitor::functions() {
  return functions_;
}

} /* end mongo_parser */
