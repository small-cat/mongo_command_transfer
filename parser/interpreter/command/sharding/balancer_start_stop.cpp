#include "balancer_start_stop.h"
#include "../../../ast/list_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
BalancerStartStopCmd::BalancerStartStopCmd() {}
BalancerStartStopCmd::~BalancerStartStopCmd() {}

std::string BalancerStartStopCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string cmd_hdr;
  std::string first_key = map->GetKeyBySequence(0);
  if (utils::StringUtils::StrCmp(first_key, "balancerStart")) {
    cmd_hdr = "sh.startBalancer";
  } else if (utils::StringUtils::StrCmp(first_key, "balancerStop")) {
    cmd_hdr = "sh.stopBalancer";
  } else {
    return "can not find sharding cmd: " + first_key;
  }

  auto max_time = map->GetValue("maxTimeMS");
  if (max_time) {
    return cmd_hdr + "(" + max_time->ToString() + ")";
  } else {
    return cmd_hdr + "()";
  }
}
} /* end mongo_cmd */
