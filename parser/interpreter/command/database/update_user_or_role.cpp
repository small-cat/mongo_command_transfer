#include "update_user_or_role.h"
#include "../../../ast/list_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
UpdateUserRole::UpdateUserRole() {}
UpdateUserRole::~UpdateUserRole() {}

std::string UpdateUserRole::Translate(mongo_parser::Value* ast) {
  std::string res = GetCommandHead(ast);
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto wc = map->GetValue("writeConcern");
  std::string write_con;
  if (wc) {
    write_con = wc->ToString();
    map->DelKey("writeConcern");
  }

  std::string fargs;
  fargs = name() + ", " + map->ToString();
  if (!write_con.empty()) {
    fargs += ", " + write_con;
  }

  res += "({" + fargs + "})";
  return res;
}
} /* end mongo_cmd */
