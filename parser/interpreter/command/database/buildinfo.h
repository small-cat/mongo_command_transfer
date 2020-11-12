#ifndef __BUILDINFO_H__
#define __BUILDINFO_H__

#include "database_cmd.h"

namespace mongo_cmd {
class BuildinfoCmd : public DatabaseCmd {
public:
  BuildinfoCmd();
  virtual ~BuildinfoCmd();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __BUILDINFO_H__ */
