#ifndef __MONGODB_PARSER_H__
#define __MONGODB_PARSER_H__

#include "iparser.h"

namespace mongo_parser {
class MongodbParser : public IParser {
public:
  MongodbParser();
  virtual ~MongodbParser();

  void Parse(const std::string& operateStr, std::vector<OperateInfo>& infos);
};
} /* end mongodb_parser */

#endif /* __MONGODB_PARSER_H__ */
