#include "list_value.h"

namespace mongo_parser {
ListValue::ListValue() {
  map_ = new MapValue();
  class_type_ = Value::ClassType::LIST;
}

ListValue::~ListValue() {
  if (nullptr != map_) {
    delete map_;
    map_ = nullptr;
  }
}

void ListValue::AddValue(std::string key, Value* val) {
  map_->AddValue(key, val);
}

Value* ListValue::GetValueBySequence(long seq) {
  return map_->GetValueBySequence(seq);
}

std::string ListValue::GetKeyBySequence(long seq) {
  return map_->GetKeyBySequence(seq);
}

std::string ListValue::ToString() {
  std::string result = "{";
  result += map_->ToString();
  result += "}";
  return result;
}

std::size_t ListValue::Size() {
  return map_->Size();
}

MapValue* ListValue::GetValue() {
  return map_;
}
} /* end mongo_parser */
