#include "mongodb_parser.h"

#include "../syntax//generated/MongodbCmdLexer.h"
#include "../syntax/generated/MongodbCmdParser.h"
#include "get_operate_info_from_ast.h"
#include "get_operate_info_visitor.h"
#include "error_verbose_listener.hpp"

#include "interpreter/interpreter.h"

namespace mongo_parser {
using namespace mongodbcmd;
using namespace antlr4;

MongodbParser::MongodbParser() {}
MongodbParser::~MongodbParser() {}

void MongodbParser::Parse(const std::string& operateStr, 
    std::vector<OperateInfo>& infos) {
  ANTLRInputStream input(operateStr);
  MongodbCmdLexer lexer(&input);

  ErrorVerboseListener lexer_err;
  lexer.removeErrorListeners();
  lexer.addErrorListener(&lexer_err);

  CommonTokenStream tokens(&lexer);
  tokens.fill();
  if (lexer_err.has_error()) {
    std::cout << "Parse failed in lexer:" << operateStr << std::endl;
    std::cout << "err msg:" << lexer_err.err_message() << std::endl;
    return;
  }

#ifdef DEBUG_0
  for (auto t : tokens.getTokens()) {
    std::cout << t->toString() << std::endl;
  }
#endif

  MongodbCmdParser parser(&tokens);
  parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::SLL);

  ErrorVerboseListener parser_err;
  parser.removeErrorListeners();
  parser.setErrorHandler(std::make_shared<BailErrorStrategy>());

  MongodbCmdParser::StmtContext* stmt_ctx = nullptr;
  try {
    stmt_ctx = parser.stmt();
  } catch (ParseCancellationException& ex) {
    tokens.reset();
    parser.reset();

    parser.addErrorListener(&parser_err);
    parser.setErrorHandler(std::make_shared<DefaultErrorStrategy>());
    parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::LL);
    stmt_ctx = parser.stmt();
  }

#ifdef DEBUG_0
  std::cout << ((tree::ParseTree*)stmt_ctx)->toStringTree(&parser) << std::endl;
#endif

  if (parser_err.has_error()) {
    std::cout << "Parse failed: " << operateStr << std::endl;
    std::cout << "err msg:" << parser_err.err_message() << std::endl;
    return;
  }

  GetOperateInfoVisitor visitor(&parser);
  Value* val = (Value*)visitor.visit(stmt_ctx);
  // res is antlrcpp::Any
  if (nullptr == val) {
    std::cout << "operate info is empty." << std::endl;
    return;
  }

  GetOperateInfoFromAst* get_op = new GetOperateInfoFromAst(val);
  get_op->GetOperateInfo();
  infos.push_back(get_op->operate_info());

  mongo_cmd::Interpreter* intern = new mongo_cmd::Interpreter(val);
  std::cout << "\ntranslating ----->>>>>" << std::endl;
  std::cout << intern->Translate() << std::endl;

  delete intern;
  delete get_op;
}

} /* end mongodb_parser */
