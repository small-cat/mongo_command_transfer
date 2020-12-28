#ifndef __VALUE_H__
#define __VALUE_H__

#include <string>
#include <vector>

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

class ValueTracker  {
public:
  template <typename T, typename ... Args>
    T* CreateInstance(Args&& ... args) {
      static_assert(std::is_base_of<Value, T>::value, "Argument must be a Value type");
      T* result = new T(args ...);
      allocated_.push_back(result);
      return result;
    }

  void Reset() {
    for (auto entry : allocated_) {
      delete entry;
    }

    allocated_.clear();
  }

private:
  std::vector<Value *> allocated_;
};

} /* end mongo_parser */

#endif /* __VALUE_H__ */
