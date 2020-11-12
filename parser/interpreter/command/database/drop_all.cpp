#include "drop_all.h"
#include "../../../ast/list_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
DropAllCmd::DropAllCmd() {}
DropAllCmd::~DropAllCmd() {}

std::string DropAllCmd::GetCommandHead(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string fname = map->GetKeyBySequence(0);
  if (utils::StringUtils::StrCmp(fname, "dropAllUsersFromDatabase")) {
    fname = "dropAllUsers";
    SetFunctionName(fname);
  } else if (utils::StringUtils::StrCmp(fname, "dropAllRolesFromDatabase")) {
    fname = "dropAllRoles";
  }

  return "db." + fname;
}
std::string DropAllCmd::Translate(mongo_parser::Value* ast) {
  std::string res = GetCommandHead(ast);

  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto wc = map->GetValue("writeConcern");
  std::string write_concern;

  if (wc) {
    write_concern = wc->ToString();
    res += "(" + write_concern + ")";
  } else {
    res += "()";
  }

  return res;
}
} /* end mongo_cmd */
