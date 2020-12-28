#include "function_def.h"

namespace mongo_parser {
FunctionDef::FunctionDef() {}
FunctionDef::FunctionDef(std::string name) : function_name_(name) {}

FunctionDef::~FunctionDef() {}

void FunctionDef::SetFunctionName(std::string name) {
  function_name_ = name;
}

std::string FunctionDef::function_name() {
  return function_name_;
}

void FunctionDef::AddArg(Value* val) {
  args_.push_back(val);
}
} /* end mongo_parser */
