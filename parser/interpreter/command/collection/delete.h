#ifndef __DELETE_H__
#define __DELETE_H__

#include "collection_cmd.h"
#include "../../../ast/value.hpp"

namespace mongo_cmd {
class DeleteCmd : public CollectionCmd {
public:
  DeleteCmd();
  virtual ~DeleteCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __DELETE_H__ */
