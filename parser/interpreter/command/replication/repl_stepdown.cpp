#include "repl_stepdown.h"
#include "../../../ast/list_value.h"

namespace mongo_cmd {
ReplStepDownCmd::ReplStepDownCmd() {}
ReplStepDownCmd::~ReplStepDownCmd() {}

std::string ReplStepDownCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "rs.stepDown";
}
std::string ReplStepDownCmd::Translate(mongo_parser::Value* ast) {
  std::string cmd_hdr = GetCommandHead(ast);
  std::string fargs;

  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto stepdown = map->GetValue("replSetStepDown");
  if (stepdown == nullptr) {
    return "replSetStepDown: arguments is empty";
  }
  fargs = "stepDownSecs: " + stepdown->ToString();

  auto secondary = map->GetValue("secondaryCatchUpPeriodSecs");
  if (secondary) {
    fargs += ", secondaryCatchUpPeriodSecs: " + secondary->ToString();
  }

  return cmd_hdr + "({" + fargs + "})";
}
} /* end mongo_cmd */
