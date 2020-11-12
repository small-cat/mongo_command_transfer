#include "find.h"

namespace mongo_cmd {
FindCmd::FindCmd() {}
FindCmd::~FindCmd() {}

std::string FindCmd::Translate(mongo_parser::Value* ast) {
  std::string res = GetCommandHead(ast);
  std::string fargs {""};

  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string delim {""};
  auto query = map->GetValue("filter");
  if (query) {
    fargs += delim;
    fargs += query->ToString();
    delim = ", ";
  }

  auto projection = map->GetValue("projection");
  if (projection) {
    fargs += delim;
    fargs += projection->ToString();
  }
  res += "({" + fargs + "})";

  auto sort = map->GetValue("sort");
  if (sort) {
    res += ".sort("+ sort->ToString() + ")";
  }

  auto limit = map->GetValue("limit");
  if (limit) {
    res += ".limit(" + limit->ToString() + ")";
  }

  return res;
}
} /* end mongo_cmd */
