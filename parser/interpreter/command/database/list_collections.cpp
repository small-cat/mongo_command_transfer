#include "list_collections.h"
#include "../../../ast/list_value.h"

namespace mongo_cmd {
ListCollections::ListCollections() {}
ListCollections::~ListCollections() {}

std::string ListCollections::GetCommandHead(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto first_key = map->GetKeyBySequence(0);
  map->DelKey(first_key);

  SetFunctionName(first_key);
  return "db.getCollectionInfos";
}
} /* end mongo_cmd */
