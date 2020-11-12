#ifndef __ARRAY_VALUE_H__
#define __ARRAY_VALUE_H__

#include <vector>

#include "value.hpp"

namespace mongo_parser {
class ArrayValue : public Value {
public:
  ArrayValue();
  virtual ~ArrayValue();

  void AddValue(Value* val);
  std::vector<Value*> value();
  std::string ToString();
  std::size_t Size();
private:
  std::vector<Value*> value_;
};
} /* end mongo_parser */

#endif /* __ARRAY_VALUE_H__ */
