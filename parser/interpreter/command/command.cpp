#include <string.h>
#include "command.h"
#include "../../ast/list_value.h"

namespace mongo_cmd {
Command::Command() {}
Command::~Command() {}

/**
 * @fn TranslateByArg 
 * @brief 
 * @param ast is arguments of runCommand, it is a ListValue
 * @param kv is true, map->ToString() to print key and value, or just print value
 * @author Jona
 * @date 06/11/2020 15:58:04 
*/ 
std::string Command::TranslateByArg(mongo_parser::Value* ast, const std::string& arg, bool kv) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string func_args {""};
  // options 表示取 map 中剩余的所有参数
  if (strcmp(arg.c_str(), "options") == 0) {
    if (!kv) {
      func_args = map->ValueToString();
    } else {
      func_args = map->ToString();
    }
  } else {
    auto v = map->GetValue(arg);

    if (v != nullptr) {
      func_args = v->ToString();
    }
  }

  return func_args;
}


std::string Command::TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2, bool kv) {
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  std::string func_args {""};
  if (strcmp(arg1.c_str(), "options") == 0) {
    if (strcmp(arg2.c_str(), "options") == 0) {
      return "error: there are two options arguments.";
    }

    // argument maybe optional in mongodb
    auto arg2_val = map->GetValue(arg2);
    if (arg2_val) {
      std::string tmp = arg2_val->ToString();
      map->DelKey(arg2);
      func_args = (kv? map->ToString() : map->ValueToString()) + ", " + tmp;
    } else {
      func_args = kv? map->ToString() : map->ValueToString();
    }
  } else {
    auto arg1_val = map->GetValue(arg1);
    if (arg1_val) {
      func_args += arg1_val->ToString();
      map->DelKey(arg1);
    }

    if (strcmp(arg2.c_str(), "options") == 0) {
      std::string op_str = kv? map->ToString() : map->ValueToString();
      if (!op_str.empty()) {
        func_args += ", " + op_str;
      }
    } else {
      auto arg2_val = map->GetValue(arg2);
      if (arg2_val) {
        func_args += ", " + arg2_val->ToString();
        map->DelKey(arg2);
      }
    }
  }

  return func_args;
}

std::string Command::TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2, const std::string &arg3, bool kv) {
  std::string res = TranslateByArg(ast, arg1, arg2, kv);
  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  if (strcmp(arg3.c_str(), "options") == 0) {
    std::string op_str = kv? map->ToString() : map->ValueToString();
    if (!op_str.empty()) {
      res += ", " + op_str;
    }
  } else {
    auto arg3_val = map->GetValue(arg3);
    if (arg3_val) {
      res += ", " + arg3_val->ToString();
      map->DelKey(arg3);
    }
  }

  return res;
}

std::string Command::TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2, const std::string &arg3, const std::string &arg4, bool kv) {
  std::string res = TranslateByArg(ast, arg1, arg2, arg3, kv);

  auto list_val = (mongo_parser::ListValue*)ast;
  auto map = list_val->GetValue();

  if (strcmp(arg4.c_str(), "options") == 0) {
    std::string op_str = kv? map->ToString() : map->ValueToString();
    if (!op_str.empty()) {
      res += ", " + op_str;
    }
  } else {
    auto arg4_val = map->GetValue(arg4);
    if (arg4_val) {
      res += ", " + arg4_val->ToString();
      map->DelKey(arg4);
    }
  }

  return res;
}
} /* end mongo_cmd */
