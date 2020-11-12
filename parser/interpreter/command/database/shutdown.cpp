#include "shutdown.h"

#include "../../../ast/list_value.h"

namespace mongo_cmd {
ShutdownCmd::ShutdownCmd() {}
ShutdownCmd::~ShutdownCmd() {}

std::string ShutdownCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();
  std::string first_key = map->GetKeyBySequence(0);
  map->DelKey(first_key);

  return "db.shutdownServer({" + map->ToString() + "})";
}
} /* end mongo_cmd */
