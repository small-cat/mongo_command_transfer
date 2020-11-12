#ifndef __INTEGER_VALUE_H__
#define __INTEGER_VALUE_H__

#include "value.hpp"

namespace mongo_parser {
class IntegerValue : public Value {
public:
  IntegerValue(long val);
  virtual ~IntegerValue();

  void SetValue(long val);
  long value();
  std::string ToString();
private:
  long value_;
};
} /* end mongo_parser */

#endif /* __INTEGER_VALUE_H__ */
