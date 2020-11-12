#ifndef __REPL_RECONFIG_H__
#define __REPL_RECONFIG_H__

#include "replication_cmd.h"
namespace mongo_cmd {
class ReplReconfigCmd : public ReplicationCmd {
public:
  ReplReconfigCmd();
  virtual ~ReplReconfigCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __REPL_RECONFIG_H__ */
