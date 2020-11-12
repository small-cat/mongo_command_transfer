#include "strings_value.h"

namespace mongo_parser {
StringsValue::StringsValue(std::string val) : value_(val) {
  class_type_ = Value::ClassType::STRINGS;
}

StringsValue::~StringsValue() {}

void StringsValue::SetValue(std::string val) {
  value_ = val;
}

std::string StringsValue::value() {
  return value_;
}

std::string StringsValue::ToString() {
  return value_;
}
} /* end mongo_parser */
