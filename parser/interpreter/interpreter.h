#ifndef __INTERPRETER_H__
#define __INTERPRETER_H__

#include <string>

#include "../ast/value.hpp"
#include "./command/command.h"

namespace mongo_cmd {
class Interpreter {
public:
  Interpreter(mongo_parser::Value* ast);
  virtual ~Interpreter();

  std::string Translate();
private:
  mongo_parser::Value* ast_;
  Command* command_;
};
} /* end mongo_cmd */

#endif /* __INTERPRETER_H__ */
