#include "factory_cmd.h"
#include "../../ast/list_value.h"
#include "../../ast/strings_value.h"

#include "collection/collection_cmd.h"
#include "collection/plan_cache.h"
#include "collection/list_indexes.h"
#include "collection/coll_stats.h"
#include "collection/find.h"
#include "collection/delete.h"
#include "collection/update.h"

#include "database/database_cmd.h"
#include "database/create_user_or_role.h"
#include "database/drop_all.h"
#include "database/update_user_or_role.h"
#include "database/users_info.h"
#include "database/roles_info.h"
#include "database/set_free_monitoring.h"
#include "database/fsync.h"
#include "database/profile.h"
#include "database/shutdown.h"
#include "database/buildinfo.h"
#include "database/list_collections.h"
#include "database/create.h"

#include "replication/replication_cmd.h"
#include "replication/repl_reconfig.h"
#include "replication/repl_stepdown.h"

#include "sharding/sharding_cmd.h"
#include "sharding/balancer_start_stop.h"

#include "session/session_cmd.h"

namespace mongo_cmd {
FactoryCommand::FactoryCommand() {}
FactoryCommand::~FactoryCommand() {}

std::map<std::string, FactoryCommand::CommandType> FactoryCommand::CommandMaps = {
  {"aggregate", CommandType::COLLECTION},
  {"count", CommandType::COLLECTION},
  {"distinct", CommandType::COLLECTION},
  {"mapReduce", CommandType::COLLECTION},
  {"findAndModify", CommandType::COLLECTION},
  {"insert", CommandType::COLLECTION},
  {"createIndexes", CommandType::COLLECTION},
  {"planCacheClear", CommandType::PLANCACHE},
  {"planCacheClearFilters", CommandType::PLANCACHE},
  {"listIndexes", CommandType::LISTINDEXES},
  {"collStats", CommandType::COLLSTATS},
  {"find", CommandType::FIND},
  {"delete", CommandType::DELETE},
  {"update", CommandType::UPDATE},

  // database 
  {"dropUser", CommandType::DATABASE},
  {"grantRolesToUser", CommandType::DATABASE},
  {"revokeRolesFromUser", CommandType::DATABASE},
  {"dropRole", CommandType::DATABASE},
  {"grantPrivilegesToRole", CommandType::DATABASE},
  {"grantRolesToRole", CommandType::DATABASE},
  {"revokePrivilegesFromRole", CommandType::DATABASE},
  {"revokeRolesFromRole", CommandType::DATABASE},
  {"getFreeMonitoringStatus", CommandType::DATABASE},
  {"currentOp", CommandType::DATABASE},
  {"dropDatabase", CommandType::DATABASE},
  {"fsyncUnlock", CommandType::DATABASE},
  {"killOp", CommandType::DATABASE},
  {"hostInfo", CommandType::DATABASE},
  {"listCommands", CommandType::DATABASE},
  {"serverStatus", CommandType::DATABASE},
  {"createUser", CommandType::CREATE_USER_ROLE},
  {"createRole", CommandType::CREATE_USER_ROLE},
  {"dropAllUsersFromDatabase", CommandType::DROP_ALL},
  {"dropAllRolesFromDatabase", CommandType::DROP_ALL},
  {"updateUser", CommandType::UPDATE_USER_ROLE},
  {"updateRole", CommandType::UPDATE_USER_ROLE},
  {"usersInfo", CommandType::USERSINFO},
  {"rolesInfo", CommandType::ROLESINFO},
  {"setFreeMonitoring", CommandType::SET_FREE_MONITOR},
  {"fsync", CommandType::FSYNC},
  {"profile", CommandType::PROFILE},
  {"shutdown", CommandType::SHUTDOWN},
  {"buildInfo", CommandType::BUILDINFO},
  {"listCollections", CommandType::LIST_COLLECTIONS},
  {"create", CommandType::CREATE},

  // replication 
  {"replSetGetConfig", CommandType::REPLICATION},
  {"replSetGetStatus", CommandType::REPLICATION},
  {"replSetInitiate", CommandType::REPLICATION},
  {"replSetSyncFrom", CommandType::REPLICATION},
  {"replSetReconfig", CommandType::REPL_RECONFIG},
  {"replSetStepDown", CommandType::REPL_STEPDOWN},

  // sharding 
  {"addShard", CommandType::SHARDING},
  {"addShardToZone", CommandType::SHARDING},
  {"balancerCollectionStatus", CommandType::SHARDING},
  {"enableSharding", CommandType::SHARDING},
  {"moveChunk", CommandType::SHARDING},
  {"removeShardFromZone", CommandType::SHARDING},
  {"shardCollection", CommandType::SHARDING},
  {"split", CommandType::SHARDING},
  {"updateZoneKeyRange", CommandType::SHARDING},
  {"balancerStart", CommandType::SHARD_START_STOP},
  {"balancerStop", CommandType::SHARD_START_STOP},

  // session
  {"abortTransaction", CommandType::SESSION},
  {"commitTransaction", CommandType::SESSION},
  {"startSession", CommandType::SESSION},
};

Command* FactoryCommand::GetCommand(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string first_key = utils::StringUtils::TrimQuoted(map->GetKeyBySequence(0));
  auto search = CommandMaps.find(first_key);
  if (search == CommandMaps.end()) {
    return nullptr;
  }

  switch (search->second) {
    case CommandType::COLLECTION: 
      return new CollectionCmd();
    case CommandType::PLANCACHE: 
      return new PlanCache();
    case CommandType::LISTINDEXES:
      return new ListIndexes();
    case CommandType::COLLSTATS:
      return new CollStats();
    case CommandType::FIND:
      return new FindCmd();
    case CommandType::DELETE:
      return new DeleteCmd();
    case CommandType::UPDATE:
      return new UpdateCmd();

    // database
    case CommandType::DATABASE:
      return new DatabaseCmd();
    case CommandType::CREATE_USER_ROLE:
      return new CreateUserRoleCmd();
    case CommandType::DROP_ALL:
      return new DropAllCmd();
    case CommandType::UPDATE_USER_ROLE:
      return new UpdateUserRole();
    case CommandType::USERSINFO:
      return new UsersInfoCmd();
    case CommandType::ROLESINFO:
      return new RolesInfoCmd();
    case CommandType::SET_FREE_MONITOR:
      return new SetFreeMonitorCmd();
    case CommandType::FSYNC:
      return new FsyncCmd();
    case CommandType::PROFILE:
      return new ProfileCmd();
    case CommandType::SHUTDOWN:
      return new ShutdownCmd();
    case CommandType::BUILDINFO:
      return new BuildinfoCmd();
    case CommandType::LIST_COLLECTIONS:
      return new ListCollections();
    case CommandType::CREATE:
      return new CreateCmd();
      
    // replication 
    case CommandType::REPLICATION:
      return new ReplicationCmd();
    case CommandType::REPL_RECONFIG:
      return new ReplReconfigCmd();
    case CommandType::REPL_STEPDOWN:
      return new ReplStepDownCmd();

    // sharding 
    case CommandType::SHARDING:
      return new ShardingCmd();
    case CommandType::SHARD_START_STOP:
      return new BalancerStartStopCmd();
    case CommandType::SESSION:
      return new SessionCmd();
    default:
      return nullptr;
  }
}
} /* end mongo_cmd */
