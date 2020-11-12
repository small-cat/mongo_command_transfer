#ifndef __SHARDING_CMD_H__
#define __SHARDING_CMD_H__

#include <map>
#include "../command.h"

namespace mongo_cmd {
class ShardingCmd : public Command {
public:
  ShardingCmd();
  virtual ~ShardingCmd();

  static std::map<std::string, Arguments> SHFunctionArgMap;
  virtual std::string GetCommandHead(mongo_parser::Value* ast);
  virtual std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __SHARDING_CMD_H__ */
