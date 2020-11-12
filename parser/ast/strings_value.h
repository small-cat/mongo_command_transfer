#ifndef __STRINGS_VALUE_H__
#define __STRINGS_VALUE_H__

#include <string>
#include "value.hpp"

namespace mongo_parser {
class StringsValue : public Value {
public:
  StringsValue(std::string val);
  virtual ~StringsValue();

  void SetValue(std::string val);
  std::string value();
  std::string ToString();
private:
  std::string value_;
};
} /* end mongo_parser */

#endif /* __STRINGS_VALUE_H__ */
