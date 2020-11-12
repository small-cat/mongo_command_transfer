#ifndef __MAP_VALUE_H__
#define __MAP_VALUE_H__

#include <vector>
#include <map>
#include "value.hpp"

namespace mongo_parser {
class MapValue : public Value {
public:
  MapValue();
  MapValue(std::string key, Value* val);
  virtual ~MapValue();

  Value* GetValue(std::string k);
  void AddValue(std::string k, Value* val);
  Value* GetValueBySequence(long seq);
  std::string GetKeyBySequence(long seq);
  std::size_t Size();
  std::string ToString();

  std::vector<std::string> GetKeys();
  void DelKey(std::string key);
  std::string ToStringByKeys(bool flag);
  std::string ValueToString();
private:
  std::map<std::string, Value*> value_;
  std::vector<std::string> keys_;
};
} /* end mongo_parser */

#endif /* __MAP_VALUE_H__ */
