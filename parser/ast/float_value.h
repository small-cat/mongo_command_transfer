#ifndef __FLOAT_VALUE_H__
#define __FLOAT_VALUE_H__

#include "value.hpp"

namespace mongo_parser {
class FloatValue : public Value {
public:
  FloatValue(double val);
  virtual ~FloatValue();

  void SetValue(double val);
  double value();
  std::string ToString();
private:
  double value_;
};
} /* end mongo_parser */

#endif /* __FLOAT_VALUE_H__ */
