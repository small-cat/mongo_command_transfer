#ifndef __VALUE_H__
#define __VALUE_H__

#include <string>

namespace mongo_parser {
class Value  {
public:
  virtual ~Value() {}

  enum ClassType {
    STRINGS,
    INTEGER,
    FLOAT,
    ARRAY,
    LIST,
    MAP
  };
  ClassType class_type_;

  virtual std::string ToString() = 0;
};
} /* end mongo_parser */

#endif /* __VALUE_H__ */
