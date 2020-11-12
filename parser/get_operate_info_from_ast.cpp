#include "get_operate_info_from_ast.h"
#include "mongo_function_def.hpp"

#include <iostream>

namespace mongo_parser {
GetOperateInfoFromAst::GetOperateInfoFromAst(Value* val) : value_(val) {}
GetOperateInfoFromAst::~GetOperateInfoFromAst() {
  if (value_ != nullptr) {
    delete value_;
  }

  value_ = nullptr;
}

OperateInfo GetOperateInfoFromAst::operate_info() {
  return operate_info_;
}

void GetOperateInfoFromAst::GetOperateInfo() {
  if (value_->class_type_ != Value::ClassType::LIST) {
    // error occured
    // arguments in mongodb runCommand or adminCommand must be list 
    std::cout << "error occured, arguments must be list" << std::endl;
    return;
  }

  // the first key_value shows mongo command type
  // for example
  // db.runCommand({insert:"studentinfo", ...})
  // this command shows that mongodb will insert data into collection called studentinfo, 
  // equals to db.studentinfo.insert({...})
  auto val = (ListValue*)value_;

  if (val->Size() == 0) {
    std::cout << "list is empty, error..." << std::endl;
    return;
  }
  // get first val element
  auto first_val = val->GetValueBySequence(0);
  auto first_key = val->GetKeyBySequence(0);
  
  operate_info_.operate = first_key;
  operate_info_.operateType = GetMongoOpTypeString(first_key);
  
  if (first_val->class_type_ == Value::ClassType::STRINGS) {
    auto str_val = (StringsValue*)first_val;
    OperateObject obj;
    obj.objectName = str_val->value();
    operate_info_.objects.push_back(obj);
  }
}
} /* end mongodb_parser */
