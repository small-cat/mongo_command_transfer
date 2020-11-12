#ifndef __COLLECTION_CMD_H__
#define __COLLECTION_CMD_H__

#include <map>
#include "../command.h"
#include "../../../utils/string_utils.hpp"

namespace mongo_cmd {
 class CollectionCmd : public Command {
 public:
   CollectionCmd();
   virtual ~CollectionCmd();

   static std::map<std::string, Arguments> CollFunctionArgMap;
 
   // get command head, eg: db.collection.find
   virtual std::string GetCommandHead(mongo_parser::Value* ast);
   virtual std::string Translate(mongo_parser::Value* ast);

   // std::string TranslateByArg(mongo_parser::Value* ast, const std::string &arg);
   // std::string TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2);
   // std::string TranslateByArg(mongo_parser::Value* ast, const std::string &arg1, const std::string &arg2, const std::string &arg3);

   std::string collection_name();
   std::string function_name();
   void SetCollectionName(std::string n);
   void SetFunctionName(std::string f);
 private:
   std::string collection_name_;
   std::string function_name_;
 };
} /* end mongo_cmd */

#endif /* __COLLECTION_CMD_H__ */
