#include "set_free_monitoring.h"
#include "../../../ast/list_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
SetFreeMonitorCmd::SetFreeMonitorCmd() {}
SetFreeMonitorCmd::~SetFreeMonitorCmd() {}

std::string SetFreeMonitorCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "db." + function_name();
}

std::string SetFreeMonitorCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto action = map->GetValue("action");
  if (action == nullptr) {
    return "setFreeMonitoring: action is empty.";
  }

  std::string fname {""};
  if (utils::StringUtils::StrCmp(action->ToString(), "enable")) {
    fname = "enableFreeMonitoring()";
  } else if (utils::StringUtils::StrCmp(action->ToString(), "disable")) {
    fname = "disableFreeMonitoring()";
  }
  SetFunctionName(fname);

  return GetCommandHead(ast);
}

} /* end mongo_cmd */
