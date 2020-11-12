#ifndef __IPARSER_H__
#define __IPARSER_H__

#include <string>
#include <vector>

namespace mongo_parser {
struct OperateObject {
  std::string objectName;
  std::vector<std::string> subObjectName;

  void clear() {
    objectName.clear();
    subObjectName.clear();
  }
};

struct OperateInfo {
  std::string operate;
  std::string operateType;
  std::vector<OperateObject> objects;
};

class IParser  {
public:
  virtual ~IParser() {}
  virtual void Parse(const std::string &operateStr, std::vector<OperateInfo>& infos) = 0;
};
} /* end mongo_parser */

#endif /* __IPARSER_H__ */
