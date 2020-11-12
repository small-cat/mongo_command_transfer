#ifndef __REPLICATION_CMD_H__
#define __REPLICATION_CMD_H__

#include <map>
#include "../command.h"

namespace mongo_cmd {
class ReplicationCmd : public Command {
public:
  ReplicationCmd();
  virtual ~ReplicationCmd();

  static std::map<std::string, Arguments> RSFunctionArgMap;
  static std::map<std::string, std::string> RSFunctionNameMap;
  virtual std::string GetCommandHead(mongo_parser::Value* ast);
  virtual std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __REPLICATION_CMD_H__ */
