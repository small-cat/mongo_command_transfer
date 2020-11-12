#include "update.h"
#include "../../../ast/array_value.h"

#define STRING_PLUS(sum, arg, delim) { sum += delim; sum += arg; delim = ", "; }

namespace mongo_cmd {
UpdateCmd::UpdateCmd() {}
UpdateCmd::~UpdateCmd() {}

std::string UpdateCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "db." + collection_name() + "." + function_name();
}

std::string UpdateCmd::Translate(mongo_parser::Value* ast) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  auto update = map->GetValue("update");
  std::string coll_name {""};
  if (update == nullptr) {
    coll_name = "UNKNOWN";
  } else {
    if (update->class_type_ != mongo_parser::Value::ClassType::STRINGS) {
      coll_name = "UNKNOWN";
    } else {
      coll_name = utils::StringUtils::TrimQuoted(((mongo_parser::StringsValue*)update)->value());
    }
  }
  SetCollectionName(coll_name);

  std::string write_concern;
  auto wc = map->GetValue("writeConcern");
  if (wc) {
    write_concern = wc->ToString();
  }

  auto updates = map->GetValue("updates");
  if (updates == nullptr) {
    return "update: updates options is empty";
  }

  std::string res;
  std::string cmd_str;
  std::string fargs;
  auto update_vals = ((mongo_parser::ArrayValue*)updates)->value();
  for (auto uv : update_vals) {
    auto uv_list = (mongo_parser::ListValue*)uv;
    auto uv_map = uv_list->GetValue();

    auto q = uv_map->GetValue("q");
    auto u = uv_map->GetValue("u");
    auto upsert = uv_map->GetValue("upsert");
    auto multi = uv_map->GetValue("multi");
    auto collation = uv_map->GetValue("collation");
    auto arr_filters = uv_map->GetValue("arrayFilters");
    auto hint = uv_map->GetValue("hint");

    // decide function name
    std::string fname;
    if (multi == nullptr) {
      fname = "deleteOne";
      SetFunctionName(fname);
    } else {
      std::string multi_val = utils::StringUtils::TrimQuoted(((mongo_parser::StringsValue*)multi)->value());
      if (utils::StringUtils::StrCmp(multi_val, "true")) {
        fname = "deleteMany";
      } else {
        fname = "deleteOne";
      }
      SetFunctionName(fname);
    }

    std::string delim {""};
    if (q) {
      STRING_PLUS(fargs, q->ToString(), delim);
    }

    if (u) {
      STRING_PLUS(fargs, u->ToString(), delim);
    }

    if (upsert) {
      STRING_PLUS(fargs, upsert->ToString(), delim);
    }

    if (!write_concern.empty()) {
      STRING_PLUS(fargs, write_concern, delim);
    }

    if (collation) {
      STRING_PLUS(fargs, collation->ToString(), delim);
    }

    if (arr_filters) {
      STRING_PLUS(fargs, arr_filters->ToString(), delim);
    }

    if (hint) {
      STRING_PLUS(fargs, hint->ToString(), delim);
    }

    cmd_str = GetCommandHead(ast) + "(" + fargs + ")";

    res += cmd_str + "\n";
    cmd_str.clear();
    fargs.clear();
  }

  return res;
}
} /* end mongo_cmd */
