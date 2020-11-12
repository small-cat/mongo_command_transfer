#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <string>
#include <vector>
#include "../../ast/value.hpp"

namespace mongo_cmd {

struct Arguments {
  long arg_num;
  std::vector<std::string> args;
  bool kv;
};

class Command  {
public:
  Command();
  virtual ~Command();
  virtual std::string GetCommandHead(mongo_parser::Value* ast) = 0;
  virtual std::string Translate(mongo_parser::Value* ast) = 0;

  std::string TranslateByArg(mongo_parser::Value* ast, const std::string &arg, bool kv);
  std::string TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2, bool kv);
  std::string TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2, const std::string &arg3, bool kv);
  std::string TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2, const std::string &arg3, const std::string &arg4, bool kv);
};
} /* end mongo_cmd */

#endif /* __COMMAND_H__ */
