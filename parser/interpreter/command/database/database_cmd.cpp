#include "database_cmd.h"

#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
DatabaseCmd::DatabaseCmd() {}
DatabaseCmd::~DatabaseCmd() {}

// options means the rest of all the arguments in runCommand
std::map<std::string, Arguments> DatabaseCmd::DBFunctionArgMap = {
  {"dropUser", {2, {"dropUser", "writeConcern"}, false}},
  {"grantRolesToUser", {3, {"grantRolesToUser", "roles", "writeConcern"}, false}},
  {"revokeRolesFromUser", {3, {"revokeRolesFromUser", "roles", "writeConcern"}, false}},
  {"dropRole", {2, {"dropRole", "writeConcern"}, false}},
  {"grantPrivilegesToRole", {3, {"grantPrivilegesToRole", "privileges", "writeConcern"}, false}},
  {"grantRolesToRole", {3, {"grantRolesToRole", "roles", "writeConcern"}, false}},
  {"revokePrivilegesFromRole", {3, {"revokePrivilegesFromRole", "privileges", "writeConcern"}, false}},
  {"revokeRolesFromRole", {3, {"revokeRolesFromRole", "roles", "writeConcern"}, false}},
  {"getFreeMonitoringStatus", {0, {}, false}},
  {"fsyncUnlock", {0, {}, false}},
  {"hostInfo", {0, {}, false}},
  {"listCommands", {0, {}, false}},
  {"currentOp", {1, {"options"}, true}},
  {"serverStatus", {1, {"options"}, true}},
  {"dropDatabase", {1, {"writeConcern"}, false}},
  {"killOp", {1, {"op"}, false}},
  {"listCollections", {1, {"options"}, true}},
};

std::string DatabaseCmd::name() {
  return name_;
}

std::string DatabaseCmd::function_name() {
  return function_name_;
}

void DatabaseCmd::SetName(std::string n) {
  name_ = n;
}

void DatabaseCmd::SetFunctionName(std::string fname) {
  function_name_ = fname;
}

// get command head, such as db.createUser
std::string DatabaseCmd::GetCommandHead(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  function_name_ = utils::StringUtils::TrimQuoted(map->GetKeyBySequence(0));
  auto first_val = map->GetValueBySequence(0);

  name_ = first_val->ToString();
  map->DelKey(function_name_);

  return "db." + function_name_;
}

std::string DatabaseCmd::Translate(mongo_parser::Value* ast) {
  std::string res = GetCommandHead(ast);

  auto search = DBFunctionArgMap.find(function_name_);
  if (search == DBFunctionArgMap.end()) {
    return "can not find function from DBFunctionArgMap";
  }

  std::string func_args;
  auto arg = search->second;
  switch (arg.arg_num) {
    case 0: 
      func_args = "()";
      return res + func_args;
      break;
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
} /* end mongo_cmd */
