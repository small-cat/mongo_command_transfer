#include "coll_stats.h"

#include "../../../ast/list_value.h"
#include "../../../ast/integer_value.h"
#include "../../../ast/strings_value.h"

namespace mongo_cmd {
CollStats::CollStats() {}
CollStats::~CollStats() {}

std::string CollStats::GetCommandHead(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto coll_stats = map->GetValue("collStats");
  if (coll_stats == nullptr) {
    return "collStats is empty";
  }

  std::string coll_name = utils::StringUtils::TrimQuoted(((mongo_parser::StringsValue*)coll_stats)->value());
  SetCollectionName(coll_name);

  std::string fname = "stats";
  SetFunctionName(fname);

  return "db." + coll_name + "." + fname;
}

std::string CollStats::Translate(mongo_parser::Value* ast) {
  std::string cmd_hdr = GetCommandHead(ast);

  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string fargs {""};
  auto scale = map->GetValue("scale");
  if (scale != nullptr) {
    fargs += "{" + scale->ToString() + "}";
  } else {
    fargs += "";
  }

  return cmd_hdr + "(" + fargs +")";
}
} /* end mongo_cmd */
