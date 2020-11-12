#include "users_info.h"
#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"
#include "../../../ast/array_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
UsersInfoCmd::UsersInfoCmd() {}
UsersInfoCmd::~UsersInfoCmd() {}

/**
 * @fn GetCommandHead
 * @brief usersInfo has several kinds of values
 *  - 1 -> getUsers, get all user infos in current database 
 *  - username -> getUser(username), get info of username
 *  - username, db -> use db, getUser(username), get info of username in db
 *  - [user1, user2 ...] -> get infos of user1, user2, ...
 * @param 
 * @author Jona
 * @date 10/11/2020 15:16:02 
*/ 
std::string UsersInfoCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "db." + function_name();
}

std::string UsersInfoCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto users_info = map->GetValue("usersInfo");
  if (users_info == nullptr) {
    return "usersInfo is empty";
  }
  map->DelKey("usersInfo");
  std::string user_func_args = map->ToString();

  switch (users_info->class_type_) {
    case mongo_parser::Value::ClassType::INTEGER: 
      {
        std::string fname = "getUsers";
        SetFunctionName(fname);

        auto show_cred = map->GetValue("showCredentials");
        auto filter = map->GetValue("filter");
        std::string delim {"{"};
        std::string fargs;
        if (show_cred) {
          fargs += delim;
          fargs += "showCredentials: " + show_cred->ToString();
          delim = ", ";
        }

        if (filter) {
          fargs += delim;
          fargs += "filter: " + filter->ToString();
        }

        if (!fargs.empty()) {
          fargs += "}";
        }

        return GetCommandHead(ast) + "(" + fargs + ")";
      }
      break;
    case mongo_parser::Value::ClassType::STRINGS: 
      return GetUserInfoFromString(users_info, user_func_args);
    case mongo_parser::Value::ClassType::LIST:
      return GetUserInfoFromList(users_info, user_func_args);
    case mongo_parser::Value::ClassType::ARRAY:
      {
        std::string res;
        std::string delim;
        auto users_arr = ((mongo_parser::ArrayValue*)users_info)->value();

        for (auto u : users_arr) {
          res += delim;
          if (u->class_type_ == mongo_parser::Value::ClassType::STRINGS) {
            res += GetUserInfoFromString(u, user_func_args);
          } else if (u->class_type_ == mongo_parser::Value::ClassType::LIST) {
            res += GetUserInfoFromList(u, user_func_args);
          } else {
            return "usersInfo: error in usersInfo options";
          }
          delim = "\n";
        }

        return res;
      }
      break;
    default:
      break;
  }

  return "";
}

std::string UsersInfoCmd::GetUserInfoFromList(mongo_parser::Value* listv, const std::string& fargs) {
  std::string cmd_hdr = "db.getUser";
  auto map = ((mongo_parser::ListValue*)listv)->GetValue();

  auto user = map->GetValue("user");
  auto db = map->GetValue("db");

  if (user == nullptr || db == nullptr) {
    return "usersInfo: user or db is empty";
  }

  std::string res = "use " + utils::StringUtils::TrimQuoted(db->ToString()) + ";\n";
  std::string uname = user->ToString();

  if (fargs.empty()) {
    res += cmd_hdr + "(" + uname + ")";
  } else {
    res += cmd_hdr + "(" + uname + ", {" + fargs + "})";
  }

  return res;
}

std::string UsersInfoCmd::GetUserInfoFromString(mongo_parser::Value* strv, const std::string& fargs) {
  std::string cmd_hdr = "db.getUser";
  std::string uname = strv->ToString();
  if (fargs.empty()) {
    return cmd_hdr + "(" + uname + ")";
  } else {
    return cmd_hdr + "(" + uname + ", {" + fargs  + "})";
  }
}
} /* end mongo_cmd */
