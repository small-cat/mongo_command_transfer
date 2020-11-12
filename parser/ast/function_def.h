#ifndef __FUNCTION_DEF_H__
#define __FUNCTION_DEF_H__

#include <string>
#include <vector>

#include "value.hpp"

namespace mongo_parser {
class FunctionDef  {
public:
  FunctionDef(std::string name);
  FunctionDef();
  virtual ~FunctionDef();

  void SetFunctionName(std::string name);
  std::string function_name();
  void AddArg(Value* val);
private:
  std::string function_name_;
  std::vector<Value*> args_;
};
} /* end mongo_parser */

#endif /* __FUNCTION_DEF_H__ */
