#ifndef __MONGO_FUNCTION_DEF_H__
#define __MONGO_FUNCTION_DEF_H__

#include <string>
#include <map>

#include "./utils/string_utils.hpp"

namespace mongo_parser {
enum MongoOpType {
  COLLECTION = 1,
  DATABASE,
  REPLICATION,
  SHARDING,
  SESSION
};

static std::map<std::string, MongoOpType> functionMaps = {
  {"aggregate", COLLECTION},
  {"count", COLLECTION},
  {"distinct", COLLECTION},
  {"mapReduce", COLLECTION},
  {"geoSearch", COLLECTION},
  {"delete", COLLECTION},
  {"find", COLLECTION},
  {"findAndModify", COLLECTION},
  {"getLastError", COLLECTION},
  {"getMore", COLLECTION},
  {"insert", COLLECTION},
  {"resetError", COLLECTION},
  {"update", COLLECTION},
  {"planCacheClear", COLLECTION},
  {"planCacheClearFilters", COLLECTION},
  {"planCacheListFilters", COLLECTION},
  {"planCacheSetFilter", COLLECTION},
  {"createIndexes", COLLECTION},

  {"authenticate", DATABASE},
  {"getnonce", DATABASE},
  {"logout", DATABASE},
  {"createUser", DATABASE},
  {"dropAllUsersFromDatabase", DATABASE},
  {"dropUser", DATABASE},
  {"grantRolesToUser", DATABASE},
  {"revokeRolesFromUser", DATABASE},
  {"updateUser", DATABASE},
  {"usersInfo", DATABASE},
  {"createRole", DATABASE},
  {"dropRole", DATABASE},
  {"dropAllRolesFromDatabase", DATABASE},
  {"grantPrivilegesToRole", DATABASE},
  {"grantRolesToRole", DATABASE},
  {"invalidateUserCache", DATABASE},
  {"revokePrivilegesFromRole", DATABASE},
  {"revokeRolesFromRole", DATABASE},
  {"rolesInfo", DATABASE},
  {"updateRole", DATABASE},

  // others
  {"cloneCollectionAsCapped", DATABASE},
  {"collMod", DATABASE},
  {"compact", DATABASE},
  {"connPoolSync", DATABASE},
  {"convertToCapped", DATABASE},
  {"create", DATABASE},
  {"currentOp", DATABASE},
  {"drop", DATABASE},
  {"dropDatabase", DATABASE},
  {"dropConnections", DATABASE},
  {"dropIndexes", DATABASE},
  {"filemd5", DATABASE},
  {"fsync", DATABASE},
  {"fsyncUnlock", DATABASE},
  {"getDefaultRWConcern", DATABASE},
  {"getParameter", DATABASE},
  {"killCursors", DATABASE},
  {"killOp", DATABASE},
  {"listCollections", DATABASE},
  {"listDatabases", DATABASE},
  {"listIndexes", DATABASE},
  {"logRotate", DATABASE},
  {"reIndex", DATABASE},
  {"renameCollection", DATABASE},
  {"setFeatureCompatibilityVersion", DATABASE},
  {"setIndexCommitQuorum", DATABASE},
  {"setParameter", DATABASE},
  {"setDefaultRWConcern", DATABASE},
  {"shutdown", DATABASE},
  {"availableQueryOptions", DATABASE},
  {"buildInfo", DATABASE},
  {"collStats", DATABASE},
  {"connPoolStats", DATABASE},
  {"connectionStatus", DATABASE},
  {"cursorInfo", DATABASE},
  {"dataSize", DATABASE},
  {"dbHash", DATABASE},
  {"dbStats", DATABASE},
  {"driverOIDTest", DATABASE},
  {"explain", DATABASE},
  {"features", DATABASE},
  {"getCmdLineOpts", DATABASE},
  {"getLog", DATABASE},
  {"hostInfo", DATABASE},
  {"isSelf", DATABASE},
  {"listCommands", DATABASE},
  {"lockInfo", DATABASE},
  {"netstat", DATABASE},
  {"ping", DATABASE},
  {"profile", DATABASE},
  {"serverStatus", DATABASE},
  {"shardConnPoolStats", DATABASE},
  {"top", DATABASE},
  {"validate", DATABASE},
  {"whatsmyuri", DATABASE},
  {"getFreeMonitoringStatus", DATABASE},
  {"setFreeMonitoring", DATABASE},
  {"logApplicationMessage", DATABASE},

  {"applyOps", REPLICATION},
  {"isMaster", REPLICATION},
  {"replSetAbortPrimaryCatchUp", REPLICATION},
  {"replSetFreeze", REPLICATION},
  {"replSetGetConfig", REPLICATION},
  {"replSetGetStatus", REPLICATION},
  {"replSetInitiate", REPLICATION},
  {"replSetMaintenance", REPLICATION},
  {"replSetReconfig", REPLICATION},
  {"replSetResizeOplog", REPLICATION},
  {"replSetStepDown", REPLICATION},
  {"replSetSyncFrom", REPLICATION},

  {"addShard", SHARDING},
  {"addShardToZone", SHARDING},
  {"balancerCollectionStatus", SHARDING},
  {"balancerStart", SHARDING},
  {"balancerStatus", SHARDING},
  {"balancerStop", SHARDING},
  {"checkShardingIndex", SHARDING},
  {"clearJumboFlag", SHARDING},
  {"cleanupOrphaned", SHARDING},
  {"enableSharding", SHARDING},
  {"flushRouterConfig", SHARDING},
  {"getShardMap", SHARDING},
  {"getShardVersion", SHARDING},
  {"isdbgrid", SHARDING},
  {"listShards", SHARDING},
  {"medianKey", SHARDING},
  {"moveChunk", SHARDING},
  {"movePrimary", SHARDING},
  {"mergeChunks", SHARDING},
  {"refineCollectionShardKey", SHARDING},
  {"removeShard", SHARDING},
  {"removeShardFromZone", SHARDING},
  {"setShardVersion", SHARDING},
  {"shardCollection", SHARDING},
  {"shardingState", SHARDING},
  {"split", SHARDING},
  {"splitChunk", SHARDING},
  {"splitVector", SHARDING},
  {"unsetSharding", SHARDING},
  {"updateZoneKeyRange", SHARDING},

  {"abortTransaction", SESSION},
  {"commitTransaction", SESSION},
  {"endSessions", SESSION},
  {"killAllSessions", SESSION},
  {"killAllSessionsByPattern", SESSION},
  {"killSessions", SESSION},
  {"refreshSessions", SESSION},
  {"startSession", SESSION}
};

static std::string GetMongoOpTypeString(std::string op) {
  static std::string MongoOpTypeString[] = {
    "",
    "COLLECTION",
    "DATABASE",
    "REPLICATION",
    "SHARDING",
    "SESSION"
  };

  auto search = functionMaps.find(utils::StringUtils::TrimQuoted(op));
  if (search == functionMaps.end()) {
    return "UNKNOWN:" + op;
  }

  return MongoOpTypeString[search->second];
}

} /* end mongo_parser */

#endif /* __MONGO_FUNCTION_DEF_H__ */
