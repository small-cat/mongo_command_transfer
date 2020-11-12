#include "session_cmd.h"
#include "../../../ast/list_value.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
SessionCmd::SessionCmd() {}
SessionCmd::~SessionCmd() {}


std::string SessionCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "";
}

std::string SessionCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();
  std::string cmd_hdr;

  std::string cmd = map->GetKeyBySequence(0);
  if (utils::StringUtils::StrCmp(cmd, "startSession")) {
    cmd_hdr = "Mongo";
  } else {
    cmd_hdr = "Session";
  }

  return cmd_hdr + "." + cmd + "()";
}
} /* end mongo_cmd */
