#ifndef __FIND_H__
#define __FIND_H__

#include "collection_cmd.h"

#include "../../../ast/value.hpp"
#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"

namespace mongo_cmd {
class FindCmd : public CollectionCmd {
public:
  FindCmd();
  virtual ~FindCmd();

  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __FIND_H__ */
