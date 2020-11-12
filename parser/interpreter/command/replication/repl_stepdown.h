#ifndef __REPL_STEPDOWN_H__
#define __REPL_STEPDOWN_H__

#include "replication_cmd.h"
namespace mongo_cmd {
class ReplStepDownCmd : public ReplicationCmd {
public:
  ReplStepDownCmd();
  virtual ~ReplStepDownCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __REPL_STEPDOWN_H__ */
