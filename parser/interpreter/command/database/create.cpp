#include "create.h"
#include "../../../ast/list_value.h"

namespace mongo_cmd {
CreateCmd::CreateCmd() {}
CreateCmd::~CreateCmd() {}

std::string CreateCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "db.createCollection";
}

std::string CreateCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string coll_name = map->GetValue("create")->ToString();
  map->DelKey("create");

  std::string fargs = "{" + map->ToString() + "}";
  return GetCommandHead(ast) + "(" + coll_name + ", " + fargs + ")";
}
} /* end mongo_cmd */
