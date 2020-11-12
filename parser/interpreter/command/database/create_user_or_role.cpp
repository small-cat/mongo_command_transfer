#include "create_user_or_role.h"

#include "../../../utils/string_utils.hpp"
#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"

namespace mongo_cmd {
CreateUserRoleCmd::CreateUserRoleCmd() {}
CreateUserRoleCmd::~CreateUserRoleCmd() {}

std::string CreateUserRoleCmd::Translate(mongo_parser::Value* ast) {
  std::string res = GetCommandHead(ast);
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();
  std::string fargs;

  auto wc = map->GetValue("writeConcern");
  std::string write_concern;
  if (wc) {
    write_concern = wc->ToString();
    map->DelKey("writeConcern");
  }

  if (utils::StringUtils::StrCmp(function_name(), "createUser")) {
    fargs += "user:" + name();
  } else if (utils::StringUtils::StrCmp(function_name(), "createRole")) {
    fargs += "role:" + name();
  }

  fargs += ", " + map->ToString();
  if (!write_concern.empty()) {
    fargs += ", " + write_concern;
  }

  res += "({" + fargs + "})";
  return res;
}
} /* end mongo_cmd */
