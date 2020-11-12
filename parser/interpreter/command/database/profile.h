#ifndef __PROFILE_H__
#define __PROFILE_H__

#include "database_cmd.h"

namespace mongo_cmd {
class ProfileCmd : public DatabaseCmd {
public:
  ProfileCmd();
  virtual ~ProfileCmd();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __PROFILE_H__ */
