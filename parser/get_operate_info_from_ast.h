#ifndef __GET_OPERATE_INFO_FROM_AST_H__
#define __GET_OPERATE_INFO_FROM_AST_H__

#include "iparser.h"
#include "get_operate_info_visitor.h"

namespace mongo_parser {
class GetOperateInfoFromAst  {
public:
  GetOperateInfoFromAst(Value* val);
  virtual ~GetOperateInfoFromAst();

  void GetOperateInfo();
  OperateInfo operate_info();
private:
  OperateInfo operate_info_;
  Value* value_;
};
} /* end mongodb_parser */

#endif /* __GET_OPERATE_INFO_FROM_AST_H__ */
