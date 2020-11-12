#ifndef __LIST_INDEXES_H__
#define __LIST_INDEXES_H__

#include "collection_cmd.h"

namespace mongo_cmd {
class ListIndexes : public CollectionCmd {
public:
  ListIndexes();
  virtual ~ListIndexes();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __LIST_INDEXES_H__ */
