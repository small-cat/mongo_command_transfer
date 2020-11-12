#include "collection_cmd.h"
#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"

#include <string.h>

namespace mongo_cmd {
CollectionCmd::CollectionCmd() {}
CollectionCmd::~CollectionCmd() {}

std::map<std::string, Arguments> CollectionCmd::CollFunctionArgMap = {
  {"aggregate", {2, {"pipeline", "options"}, false}},
  {"count", {2, {"query", "options"}, false}},
  {"distinct", {3, {"key", "query", "options"}, false}},
  {"mapReduce", {3, {"map", "reduce", "options"}, false}},
  {"findAndModify", {1, {"options"}, false}},
  {"insert", {2, {"documents", "options"}, false}},
  {"renameCollection", {2, {"to", "dropTarget"}, false}},
  {"reIndex", {0, {}, false}},
  {"createIndexes", {2, {"indexes", "commitQuorum"}, false}}
};

std::string CollectionCmd::GetCommandHead(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  function_name_ = map->GetKeyBySequence(0);
  auto first_val = map->GetValueBySequence(0);

  if (first_val->class_type_ != mongo_parser::Value::ClassType::STRINGS) {
    collection_name_ = "UNKNOWN";
  }
  collection_name_ = utils::StringUtils::TrimQuoted(((mongo_parser::StringsValue*)first_val)->value());
  map->DelKey(function_name_);

  return "db." + collection_name_ + "." + function_name_;
}

std::string CollectionCmd::Translate(mongo_parser::Value* ast) {
  std::string res = GetCommandHead(ast);
  std::string func_args {""};

  auto search = CollFunctionArgMap.find(function_name_);
  if (search == CollFunctionArgMap.end()) {
    // @todo { default translate functions }
    return "can not find from CollFunctionArgMap";
  }

  auto arg = search->second;
  switch (arg.arg_num) {
    case 0:
      func_args = "()";
      return res + func_args;
    case 1: 
      func_args = TranslateByArg(ast, arg.args.at(0), arg.kv);
      break;
    case 2: 
      func_args = TranslateByArg(ast, arg.args.at(0), arg.args.at(1), arg.kv);
      break;
    case 3:
      func_args = TranslateByArg(ast, arg.args.at(0), arg.args.at(1), arg.args.at(2), arg.kv);
      break;
    default:
      break;
  }

  res += "({" + func_args + "})";
  return res;
}

void CollectionCmd::SetCollectionName(std::string n) {
  collection_name_ = n;
}

void CollectionCmd::SetFunctionName(std::string f) {
  function_name_ = f;
}

std::string CollectionCmd::collection_name() {
  return collection_name_;
}

std::string CollectionCmd::function_name() {
  return function_name_;
}
} /* end mongo_cmd */
