#ifndef __ROLES_INFO_H__
#define __ROLES_INFO_H__

#include "database_cmd.h"

namespace mongo_cmd {
class RolesInfoCmd : public DatabaseCmd {
public:
  RolesInfoCmd();
  virtual ~RolesInfoCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);

  std::string GetRoleInfoFromList(mongo_parser::Value* listv, const std::string& fargs);
  std::string GetRoleInfoFromString(mongo_parser::Value* strv, const std::string& fargs);
};
} /* end mongo_cmd */

#endif /* __ROLES_INFO_H__ */
