#include "integer_value.h"

namespace mongo_parser {
IntegerValue::IntegerValue(long val) : value_(val) {
  class_type_ = Value::ClassType::INTEGER;
}

IntegerValue::~IntegerValue() {}

void IntegerValue::SetValue(long val) {
  value_ = val;
}

long IntegerValue::value() {
  return value_;
}

std::string IntegerValue::ToString() {
  return std::to_string(value_);
}
} /* end mongo_parser */
