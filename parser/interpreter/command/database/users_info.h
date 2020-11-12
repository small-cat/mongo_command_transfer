#ifndef __USERS_INFO_H__
#define __USERS_INFO_H__

#include "database_cmd.h"

namespace mongo_cmd {
class UsersInfoCmd : public DatabaseCmd {
public:
  UsersInfoCmd();
  virtual ~UsersInfoCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);

  std::string GetUserInfoFromList(mongo_parser::Value* listv, const std::string& fargs);
  std::string GetUserInfoFromString(mongo_parser::Value* strv, const std::string& fargs);
};
} /* end mongo_cmd */

#endif /* __USERS_INFO_H__ */
