#ifndef __FACTORY_CMD_H__
#define __FACTORY_CMD_H__

#include <string>
#include <map>

#include "command.h"
#include "../../ast/value.hpp"

namespace mongo_cmd {
class FactoryCommand  {
public:
  FactoryCommand();
  virtual ~FactoryCommand();

  enum CommandType {
    COLLECTION,
    PLANCACHE,
    LISTINDEXES,
    COLLSTATS,
    FIND,
    DELETE,
    UPDATE,
    DATABASE,
    CREATE_USER_ROLE,
    DROP_ALL,
    UPDATE_USER_ROLE,
    USERSINFO,
    ROLESINFO,
    SET_FREE_MONITOR,
    FSYNC,
    PROFILE,
    SHUTDOWN,
    BUILDINFO,
    LIST_COLLECTIONS,
    CREATE,
    REPLICATION,
    REPL_RECONFIG,
    REPL_STEPDOWN,
    SHARDING,
    SHARD_START_STOP,
    SESSION
  };

  static std::map<std::string, CommandType> CommandMaps;
  static Command* GetCommand(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __FACTORY_CMD_H__ */
