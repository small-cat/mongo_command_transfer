#ifndef __LIST_VALUE_H__
#define __LIST_VALUE_H__

#include <vector>
#include "value.hpp"
#include "map_value.h"

namespace mongo_parser {
class ListValue : public Value {
public:
  ListValue();
  virtual ~ListValue();

  void AddValue(std::string key, Value* val);
  std::string ToString();
  Value* GetValueBySequence(long seq);
  std::string GetKeyBySequence(long seq);
  std::size_t Size();
  MapValue* GetValue();
private:
  MapValue* map_;
};
} /* end mongo_parser */

#endif /* __LIST_VALUE_H__ */
