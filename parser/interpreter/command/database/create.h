#ifndef __CREATE_H__
#define __CREATE_H__

#include "database_cmd.h"

namespace mongo_cmd {
class CreateCmd : public DatabaseCmd {
public:
  CreateCmd();
  virtual ~CreateCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __CREATE_H__ */
