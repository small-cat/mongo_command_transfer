#ifndef __FSYNC_H__
#define __FSYNC_H__

#include "database_cmd.h"
namespace mongo_cmd {
class FsyncCmd : public DatabaseCmd {
public:
  FsyncCmd();
  virtual ~FsyncCmd();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __FSYNC_H__ */
