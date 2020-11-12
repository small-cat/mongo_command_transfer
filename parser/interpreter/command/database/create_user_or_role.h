#ifndef __CREATE_USER_OR_ROLE_H__
#define __CREATE_USER_OR_ROLE_H__

#include "database_cmd.h"

namespace mongo_cmd {
class CreateUserRoleCmd : public DatabaseCmd {
public:
  CreateUserRoleCmd();
  virtual ~CreateUserRoleCmd();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __CREATE_USER_OR_ROLE_H__ */
