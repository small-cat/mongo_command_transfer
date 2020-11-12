#include "profile.h"

namespace mongo_cmd {
ProfileCmd::ProfileCmd() {}
ProfileCmd::~ProfileCmd() {}

std::string ProfileCmd::Translate(mongo_parser::Value* ast) {
  return "db.getProfilingStatus()";
}
} /* end mongo_cmd */
