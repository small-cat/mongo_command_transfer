#include "sharding_cmd.h"
#include "../../../ast/list_value.h"

namespace mongo_cmd {
ShardingCmd::ShardingCmd() {}
ShardingCmd::~ShardingCmd() {}

std::map<std::string, Arguments> ShardingCmd::SHFunctionArgMap = {
  {"addShard", {1, {"addShard"}, false}}, 
  {"addShardToZone", {2, {"addShardToZone", "zone"}, false}},
  {"balancerCollectionStatus", {1, {"balancerCollectionStatus"}, false}},
  {"enableSharding", {2, {"enableSharding", "primaryShard"}, false}},
  {"moveChunk", {3, {"moveChunk", "find", "to"}, false}},
  {"removeShardFromZone", {2, {"removeShardFromZone", "zone"}, false}},
  {"shardCollection", {4, {"shardCollection", "key", "unique", "options"}, false}},
  {"split", {2, {"split", "options"}, false}},
  {"updateZoneKeyRange", {4, {"updateZoneKeyRange", "min", "max", "zone"}, false}},
};

std::string ShardingCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "";
}

std::string ShardingCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();
  std::string fname;
  std::string func_args;

  fname = map->GetKeyBySequence(0);
  std::string cmd_hdr = "sh." + fname;

  auto search = SHFunctionArgMap.find(fname);
  if (search == SHFunctionArgMap.end()) {
    return "can not find Sharding Cmd: " + fname;
  }
  auto arg = search->second;
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
    case 4:
      func_args = TranslateByArg(ast, arg.args.at(0), arg.args.at(1), arg.args.at(2), arg.args.at(3), arg.kv);
      break;
    default:
      break;
  }

  return cmd_hdr + "(" + func_args + ")";
}
} /* end mongo_cmd */
