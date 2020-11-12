#include "delete.h"

#include "../../../ast/strings_value.h"
#include "../../../ast/list_value.h"
#include "../../../ast/array_value.h"
#include "../../../ast/integer_value.h"

namespace mongo_cmd {
DeleteCmd::DeleteCmd() {}
DeleteCmd::~DeleteCmd() {}

std::string DeleteCmd::GetCommandHead(mongo_parser::Value* ast) {
  return "db." + collection_name() + "." + function_name();
}

// in ast
// limit is 0, delete all, use db.collection.drop(writeConcern)
// limit is 1, delete one, use db.collection.deleteOne(query, {writeConcern, collation, hint})
// otherwise, use db.collection.deleteMany(query, {writeConcern, collation})
//
// if deletes have serveral elements, translate to mutiple commands
std::string DeleteCmd::Translate(mongo_parser::Value* ast) {
  std::string res {""};
  std::string cmd_str {""};
  std::string coll_name {""};
  std::string fname {""};
  std::string fargs {""};

  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();
  coll_name = utils::StringUtils::TrimQuoted(((mongo_parser::StringsValue*)(map->GetValueBySequence(0)))->value());
  SetCollectionName(coll_name);

  std::string write_concern {""};
  auto wc = map->GetValue("writeConcern");
  if (wc) {
    write_concern = wc->ToString();
  }

  auto deletes = (mongo_parser::ArrayValue*)(map->GetValue("deletes"));
  if (deletes->Size() == 0) {
    return "delete: deletes option is empty";
  }

  for (auto v : deletes->value()) {
    if (v->class_type_ != mongo_parser::Value::ClassType::LIST) {
      return "delete: option in deletes error.";
    }

    auto del_list = (mongo_parser::ListValue*)v;
    auto del_map = del_list->GetValue();

    auto limitval = del_map->GetValue("limit");
    if (limitval == nullptr) {
      return "delete: limit in deletes is empty.";
    }
    auto limit = ((mongo_parser::IntegerValue*)limitval)->value();
    if (0 == limit) {
      // delete all
      fname = "drop";
      SetFunctionName(fname);

      if (!write_concern.empty()) {
        fargs = "writeConcern:" + write_concern;
      } else {
        fargs = "";
      }

      cmd_str = GetCommandHead(ast) + "({" + fargs + "})";
    } else if (limit > 0) {
      auto query = del_map->GetValue("q");
      if (query == nullptr) {
        return "delete: q in deletes is empty.";
      }
      fargs += query->ToString();

      // write_concern, collation
      std::string tmp;
      std::string delim;
      if (!write_concern.empty()) {
        tmp += delim;
        tmp += write_concern;
        delim = ", ";
      }
      auto collation = del_map->GetValue("collation");
      if (collation) {
        tmp += delim;
        tmp += collation->ToString();
        delim = ", ";
      }

      if (1 == limit) {
        fname = "deleteOne";
        SetFunctionName(fname);

        auto hint = del_map->GetValue("hint");
        if (hint) {
          tmp += delim;
          tmp += hint->ToString();
        }
      } else {
        // limit > 1
        fname = "deleteMany";
        SetFunctionName(fname);
      }

      if (!tmp.empty()) {
        fargs += ", " + tmp;
      }

      cmd_str = GetCommandHead(ast) + "(" + fargs + ")";
    } 

    res += cmd_str + "; \n";
    cmd_str.clear();
    fargs.clear();
  }

  return res;
}
} /* end mongo_cmd */
