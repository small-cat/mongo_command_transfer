#ifndef __LIST_COLLECTIONS_H__
#define __LIST_COLLECTIONS_H__

#include "database_cmd.h"

namespace mongo_cmd {
class ListCollections : public DatabaseCmd {
public:
  ListCollections();
  virtual ~ListCollections();

  std::string GetCommandHead(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __LIST_COLLECTIONS_H__ */
