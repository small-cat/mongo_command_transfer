#ifndef __COLL_STATS_H__
#define __COLL_STATS_H__

#include "collection_cmd.h"

namespace mongo_cmd {
class CollStats : public CollectionCmd {
public:
  CollStats();
  virtual ~CollStats();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __COLL_STATS_H__ */
