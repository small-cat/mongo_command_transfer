#ifndef __BALANCER_START_STOP_H__
#define __BALANCER_START_STOP_H__

#include "sharding_cmd.h"
namespace mongo_cmd {
class BalancerStartStopCmd : public ShardingCmd {
public:
  BalancerStartStopCmd();
  virtual ~BalancerStartStopCmd();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __BALANCER_START_STOP_H__ */
