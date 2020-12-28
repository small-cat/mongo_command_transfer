#include "interpreter.h"
#include "command/factory_cmd.h"

namespace mongo_cmd {
Interpreter::Interpreter(mongo_parser::Value* ast) : ast_(ast) {
  command_ = FactoryCommand::GetCommand(ast);
}

Interpreter::~Interpreter() {
  if (command_ != nullptr) {
    delete command_;
  }

  command_ = nullptr;
}

std::string Interpreter::Translate() {
  if (command_ == nullptr) {
    return "";
  }

  return command_->Translate(ast_);
}
} /* end mongo_cmd */
