#include "float_value.h"

namespace mongo_parser {
FloatValue::FloatValue(double val) : value_(val) {
  class_type_ = Value::ClassType::FLOAT;
}

FloatValue::~FloatValue() {}

void FloatValue::SetValue(double val) {
  value_ = val;
}

double FloatValue::value() {
  return value_;
}

std::string FloatValue::ToString() {
  return std::to_string(value_);
}
} /* end mongo_parser */
