#ifndef __DATABASE_CMD_H__
#define __DATABASE_CMD_H__

#include <map>
#include "../command.h"

namespace mongo_cmd {
class DatabaseCmd : public Command {
public:
  DatabaseCmd();
  virtual ~DatabaseCmd();

  static std::map<std::string, Arguments> DBFunctionArgMap;

  virtual std::string GetCommandHead(mongo_parser::Value* ast);
  virtual std::string Translate(mongo_parser::Value* ast);

  std::string name();
  std::string function_name();
  void SetName(std::string n);
  void SetFunctionName(std::string fname);
private:
  std::string name_;    // name of user or role
  std::string function_name_;
};
} /* end mongo_cmd */

#endif /* __DATABASE_CMD_H__ */
