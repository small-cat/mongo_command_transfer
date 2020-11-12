#ifndef __DROP_ALL_H__
#define __DROP_ALL_H__

#include "database_cmd.h"

namespace mongo_cmd {
class DropAllCmd : public DatabaseCmd {
public:
  DropAllCmd();
  virtual ~DropAllCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __DROP_ALL_H__ */
