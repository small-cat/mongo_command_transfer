#include "fsync.h"

namespace mongo_cmd {
FsyncCmd::FsyncCmd() {}
FsyncCmd::~FsyncCmd() {}

std::string FsyncCmd::Translate(mongo_parser::Value* ast) {
  return "db.fsyncLock()";
}
} /* end mongo_cmd */
