#include "map_value.h"

#include <string.h>

namespace mongo_parser {
MapValue::MapValue() {
  class_type_ = Value::ClassType::MAP;
}

MapValue::MapValue(std::string key, Value* val) {
  value_[key] = val;
  keys_.push_back(key);
  class_type_ = Value::ClassType::MAP;
}

MapValue::~MapValue() {}

Value* MapValue::GetValue(std::string k) {
  auto search = value_.find(k);
  if (search == value_.end()) {
    return nullptr;
  }

  return search->second;
}

std::string MapValue::ToString() {
  return ToStringByKeys(true);
}

std::string MapValue::ToStringByKeys(bool flag) {
  std::string result {""};
  std::string delim {""};
  for (auto k : keys_) {
    auto search = value_.find(k);
    if (search == value_.end()) {
      continue;
    }

    result += delim;
    if (flag) {
      result += k + ":" + search->second->ToString();
    } else {
      result += search->second->ToString();
    }
    delim = ", ";
  }

  return result;
}

std::string MapValue::ValueToString() {
  return ToStringByKeys(false);
}

// return Value in MapValue which seq number is seq
// seq start from 0
// map is a sorted associated container
Value* MapValue::GetValueBySequence(long seq) {
  if (seq >= keys_.size()) {
    return nullptr;
  }

  return value_[keys_.at(seq)];
}

std::string MapValue::GetKeyBySequence(long seq) {
  if (keys_.empty()) {
    return "";
  }

  return keys_.at(seq);
}

std::size_t MapValue::Size() {
  return keys_.size();
}

void MapValue::AddValue(std::string k, Value* val) {
  value_[k] = val;
  keys_.push_back(k);
}

void MapValue::DelKey(std::string key) {
  for (auto iter = keys_.begin(); iter != keys_.end(); ) {
    if (strcmp(key.c_str(), (*iter).c_str()) == 0) {
      iter = keys_.erase(iter);
      break;
    } else {
      iter++;
    }
  }
}

std::vector<std::string> MapValue::GetKeys() {
  return keys_;
}

} /* end mongo_parser */
