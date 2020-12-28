#include "array_value.h"

namespace mongo_parser {
ArrayValue::ArrayValue() {
  class_type_ = Value::ClassType::ARRAY;
}

ArrayValue::~ArrayValue() {}

void ArrayValue::AddValue(Value* val) {
  value_.push_back(val);
}

std::vector<Value*> ArrayValue::value() {
  return value_;
}

std::string ArrayValue::ToString() {
  std::string result {""};
  std::string delim {"["};
  for (auto& val : value_) {
    result += delim;
    result += val->ToString();
    delim = ", ";
  }

  result += "]";
  return result;
}

std::size_t ArrayValue::Size() {
  return value_.size();
}
} /* end mongo_parser */
