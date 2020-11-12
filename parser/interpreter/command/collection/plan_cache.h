#ifndef __PLAN_CACHE_H__
#define __PLAN_CACHE_H__

#include "collection_cmd.h"

namespace mongo_cmd {
class PlanCache : public CollectionCmd {
public:
  PlanCache();
  virtual ~PlanCache();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __PLAN_CACHE_H__ */
