#include "list_indexes.h"

#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"

namespace mongo_cmd {
ListIndexes::ListIndexes() {}
ListIndexes::~ListIndexes() {}

std::string ListIndexes::GetCommandHead(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto first_key = map->GetKeyBySequence(0);
  auto first_val = map->GetValueBySequence(0);
  std::string coll_name = utils::StringUtils::TrimQuoted(((mongo_parser::StringsValue*)first_val)->value());

  std::string fname = "getIndexes()";
  SetCollectionName(coll_name);
  SetFunctionName(fname);

  return "db." + coll_name + "." + fname;
}

std::string ListIndexes::Translate(mongo_parser::Value* ast) {
  return GetCommandHead(ast);
}
} /* end mongo_cmd */
