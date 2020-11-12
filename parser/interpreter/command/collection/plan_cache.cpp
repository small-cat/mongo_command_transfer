#include "plan_cache.h"

#include "../../../ast/list_value.h"
#include "../../../ast/strings_value.h"

namespace mongo_cmd {
PlanCache::PlanCache() {}
PlanCache::~PlanCache() {}

std::string PlanCache::GetCommandHead(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto first_key = map->GetKeyBySequence(0);
  auto first_val = map->GetValueBySequence(0);
  std::string coll_name = utils::StringUtils::TrimQuoted(((mongo_parser::StringsValue*)first_val)->value());
  SetCollectionName(coll_name);
  map->DelKey(first_key);

  std::string fname;
  if (map->GetValue("query") == nullptr) {
    // query is empty
    fname = "clear()";
  } else {
    fname = "clearPlansByQuery";
  }
  SetFunctionName(fname);

  return "db." + coll_name + "." + fname;
}

std::string PlanCache::Translate(mongo_parser::Value* ast) {
  auto list_value = (mongo_parser::ListValue*)ast;
  auto map = list_value->GetValue();

  std::string cmd_hdr = GetCommandHead(ast);
  std::string fargs {""};

  auto query = map->GetValue("query");
  if (query == nullptr) {
    return cmd_hdr;
  } else {
    fargs += query->ToString();
  }
  auto projection = map->GetValue("projection");
  if (projection) {
    fargs += ", " + projection->ToString();
  }
  auto sort = map->GetValue("sort");
  if (sort) {
    fargs += ", " + sort->ToString();
  }

  return cmd_hdr + "(" + fargs + ")";
}
} /* end mongo_cmd */
