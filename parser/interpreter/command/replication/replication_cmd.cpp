#include "replication_cmd.h"
#include "../../../ast/list_value.h"

namespace mongo_cmd {
ReplicationCmd::ReplicationCmd() {}
ReplicationCmd::~ReplicationCmd() {}

std::map<std::string, std::string> ReplicationCmd::RSFunctionNameMap = {
  {"replSetGetConfig", "rs.config"},
  {"replSetGetStatus", "rs.status"},
  {"replSetInitiate", "rs.initiate"},
  {"replSetSyncFrom", "rs.syncFrom"},
};

std::map<std::string, Arguments> ReplicationCmd::RSFunctionArgMap = {
  {"replSetGetConfig", {0, {}, false}},
  {"replSetGetStatus", {0, {}, false}},
  {"replSetInitiate", {1, {"replSetInitiate"}, false}},
  {"replSetSyncFrom", {1, {"replSetSyncFrom"}, false}},
};

std::string ReplicationCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "";
}

std::string ReplicationCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto first_key = map->GetKeyBySequence(0);
  auto search = RSFunctionNameMap.find(first_key);
  if (search == RSFunctionNameMap.end()) {
    return "can not find replication cmd: " + first_key;
  }
  std::string cmd_hdr = search->second;

  auto search2 = RSFunctionArgMap.find(first_key);
  if (search2 == RSFunctionArgMap.end()) {
    return "can not find replication cmd arguments: " + first_key;
  }
  auto arg = search2->second;
  std::string func_args;
  switch (arg.arg_num) {
    case 0: 
      func_args = "()";
      return cmd_hdr + func_args;
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

  return cmd_hdr + "({" + func_args + "})";
}

} /* end mongo_cmd */
