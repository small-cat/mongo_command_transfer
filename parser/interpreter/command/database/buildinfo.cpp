#include "buildinfo.h"

namespace mongo_cmd {
BuildinfoCmd::BuildinfoCmd() {}
BuildinfoCmd::~BuildinfoCmd() {}

std::string BuildinfoCmd::Translate(mongo_parser::Value* ast) {
  return "db.serverBuildInfo()";
}
} /* end mongo_cmd */
