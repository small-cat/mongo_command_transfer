#ifndef __SESSION_CMD_H__
#define __SESSION_CMD_H__

#include "../command.h"

namespace mongo_cmd {
class SessionCmd : public Command {
public:
  SessionCmd();
  virtual ~SessionCmd();

  virtual std::string GetCommandHead(mongo_parser::Value* ast);
  virtual std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __SESSION_CMD_H__ */
