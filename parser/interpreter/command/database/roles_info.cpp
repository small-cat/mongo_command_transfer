#include "roles_info.h"
#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"
#include "../../../ast/array_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
RolesInfoCmd::RolesInfoCmd() {}
RolesInfoCmd::~RolesInfoCmd() {}

std::string RolesInfoCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "db." + function_name();
}

std::string RolesInfoCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto roles_info = map->GetValue("rolesInfo");
  if (roles_info == nullptr) {
    return "rolesInfo is empty";
  }

  map->DelKey("rolesInfo");
  std::string user_func_args = map->ToString();

  switch (roles_info->class_type_) {
    case mongo_parser::Value::ClassType::INTEGER: 
      {
        std::string fname = "getRoles";
        SetFunctionName(fname);

        std::string fargs = "rolesInfo: 1, " + user_func_args;

        return GetCommandHead(ast) + "({" + fargs + "})";
      }
      break;
    case mongo_parser::Value::ClassType::STRINGS: 
      return GetRoleInfoFromString(roles_info, user_func_args);
    case mongo_parser::Value::ClassType::LIST:
      return GetRoleInfoFromList(roles_info, user_func_args);
    case mongo_parser::Value::ClassType::ARRAY:
      {
        std::string res;
        std::string delim;
        auto roles_arr = ((mongo_parser::ArrayValue*)roles_info)->value();

        for (auto u : roles_arr) {
          res += delim;
          if (u->class_type_ == mongo_parser::Value::ClassType::STRINGS) {
            res += GetRoleInfoFromString(u, user_func_args);
          } else if (u->class_type_ == mongo_parser::Value::ClassType::LIST) {
            res += GetRoleInfoFromList(u, user_func_args);
          } else {
            return "rolesInfo: error in rolesInfo options";
          }
          delim = "\n";
        }

        return res;
      }
      break;
    default:
      break;
  }

  return "UNKNOWN";
}

std::string RolesInfoCmd::GetRoleInfoFromList(mongo_parser::Value* listv, const std::string& fargs) {
  std::string cmd_hdr = "db.getRole";
  auto map = ((mongo_parser::ListValue*)listv)->GetValue();

  auto role = map->GetValue("role");
  auto db = map->GetValue("db");

  if (role == nullptr || db == nullptr) {
    return "rolesInfo: role or db is empty";
  }

  std::string res = "use " + utils::StringUtils::TrimQuoted(db->ToString()) + ";\n";
  std::string role_name = role->ToString();

  if (fargs.empty()) {
    res += cmd_hdr + "(" + role_name + ")";
  } else {
    res += cmd_hdr + "(" + role_name + ", {" + fargs + "})";
  }

  return res;
}


std::string RolesInfoCmd::GetRoleInfoFromString(mongo_parser::Value* strv, const std::string& fargs) {
  std::string cmd_hdr = "db.getRole";
  std::string role_name = strv->ToString();
  if (fargs.empty()) {
    return cmd_hdr + "(" + role_name + ")";
  } else {
    return cmd_hdr + "(" + role_name + ", {" + fargs +  "})";
  }
}
} /* end mongo_cmd */
