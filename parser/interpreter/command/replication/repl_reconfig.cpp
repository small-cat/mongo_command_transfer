#include "repl_reconfig.h"
#include "../../../ast/list_value.h"

namespace mongo_cmd {
ReplReconfigCmd::ReplReconfigCmd() {}
ReplReconfigCmd::~ReplReconfigCmd() {}

std::string ReplReconfigCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "rs.reconfig";
}
std::string ReplReconfigCmd::Translate(mongo_parser::Value* ast) {
  std::string cmd_hdr = GetCommandHead(ast);
  std::string fargs;

  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto repl_set_reconfig = map->GetValue("replSetReconfig");
  if (repl_set_reconfig == nullptr) {
    return "replSetReconfig: arguments is empty";
  }
  fargs = repl_set_reconfig->ToString();
  map->DelKey("replSetReconfig");

  std::string options = map->ToString();
  if (!options.empty()) {
    fargs += ", {" + options + "}";
  }

  return cmd_hdr + "(" + fargs + ")";
}
} /* end mongo_cmd */
