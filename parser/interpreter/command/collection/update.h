#ifndef __UPDATE_H__
#define __UPDATE_H__

#include "collection_cmd.h"
#include "../../../ast/value.hpp"
#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"

namespace mongo_cmd {
class UpdateCmd : public CollectionCmd {
public:
  UpdateCmd();
  virtual ~UpdateCmd();

  std::string GetCommandHead(mongo_parser::Value* ast);
  std::string Translate(mongo_parser::Value* ast);
};
} /* end mongo_cmd */

#endif /* __UPDATE_H__ */
