#ifndef __UPDATE_USER_OR_ROLE_H__
#define __UPDATE_USER_OR_ROLE_H__

#include "database_cmd.h"

namespace mongo_cmd {
class UpdateUserRole : public DatabaseCmd {
public:
  UpdateUserRole();
  virtual ~UpdateUserRole();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __UPDATE_USER_OR_ROLE_H__ */
