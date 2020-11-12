#ifndef __SET_FREE_MONITORING_H__
#define __SET_FREE_MONITORING_H__

#include "database_cmd.h"

namespace mongo_cmd {
class SetFreeMonitorCmd : public DatabaseCmd {
public:
  SetFreeMonitorCmd();
  virtual ~SetFreeMonitorCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __SET_FREE_MONITORING_H__ */
