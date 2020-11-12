/*****************************************************************************
 * @file  : error_verbose_listener.hpp - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2019-09-29
*****************************************************************************/
#ifndef __ERROR_VERBOSE_LISTENER_H__
#define __ERROR_VERBOSE_LISTENER_H__

#include <string>
#include "BaseErrorListener.h"

class ErrorVerboseListener : public antlr4::BaseErrorListener {
public:
  ErrorVerboseListener () {
    err_message_.clear();
    has_error_ = false;
  }
  virtual ~ErrorVerboseListener () {}

  void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, 
      size_t line, size_t charPositionInLine, const std::string &msg, 
      std::exception_ptr e) {
    has_error_ = true;
    err_message_ += "line " + std::to_string(line) + ":" + std::to_string(charPositionInLine)
      + " at token[" + (offendingSymbol!=nullptr? offendingSymbol->getText() : "") + "]" + msg;
  }

  bool has_error() {
    return has_error_;
  }

  std::string err_message() {
    return err_message_;
  }

private:
  std::string err_message_;
  bool has_error_;
};

#endif /* __ERROR_VERBOSE_LISTENER_H__ */
