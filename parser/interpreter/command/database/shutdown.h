#ifndef __SHUTDOWN_H__
#define __SHUTDOWN_H__

#include "database_cmd.h"

namespace mongo_cmd {
class ShutdownCmd : public DatabaseCmd {
public:
  ShutdownCmd();
  virtual ~ShutdownCmd();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __SHUTDOWN_H__ */
