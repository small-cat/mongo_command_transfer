
// Generated from MongodbCmdLexer.g4 by ANTLR 4.7.1


#include "MongodbCmdLexer.h"


using namespace antlr4;

using namespace mongodbcmd;

MongodbCmdLexer::MongodbCmdLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MongodbCmdLexer::~MongodbCmdLexer() {
  delete _interpreter;
}

std::string MongodbCmdLexer::getGrammarFileName() const {
  return "MongodbCmdLexer.g4";
}

const std::vector<std::string>& MongodbCmdLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& MongodbCmdLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& MongodbCmdLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& MongodbCmdLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& MongodbCmdLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> MongodbCmdLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& MongodbCmdLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> MongodbCmdLexer::_decisionToDFA;
atn::PredictionContextCache MongodbCmdLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MongodbCmdLexer::_atn;
std::vector<uint16_t> MongodbCmdLexer::_serializedATN;

std::vector<std::string> MongodbCmdLexer::_ruleNames = {
  u8"M_E", u8"M_TRUE", u8"M_FALSE", u8"M_NEW", u8"M_FUNCTION", u8"RUNCOMMAND", 
  u8"ADMINCOMMAND", u8"M_USE", u8"UNSIGNED_INTEGER", u8"APPROXIMATE_NUM", 
  u8"MONGO_OPERATORS", u8"IDENTIFIER", u8"ID_START_WITH_UNDERLINE", u8"M_STRINGS", 
  u8"BACK_SLASH_STRINGS", u8"REGEX_STRINGS", u8"DOT", u8"DOLLAR", u8"UNDERLINE", 
  u8"COLON", u8"LPAREN", u8"RPAREN", u8"LBRACKET", u8"RBRACKET", u8"LBRACE", 
  u8"RBRACE", u8"COMMA", u8"SEMI", u8"PLUS", u8"MINUS", u8"MULTI", u8"DIV", 
  u8"GT", u8"LT", u8"EQ", u8"GE", u8"LE", u8"NE", u8"AND", u8"OR", u8"NOT", 
  u8"XOR", u8"INVERT", u8"LSHIFT", u8"RSHIFT", u8"SPACES", u8"ALPHA", u8"DIGIT", 
  u8"FLOAT_NUM"
};

std::vector<std::string> MongodbCmdLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> MongodbCmdLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> MongodbCmdLexer::_literalNames = {
  "", "", u8"'true'", u8"'false'", u8"'new'", u8"'function'", u8"'runCommand'", 
  u8"'adminCommand'", u8"'use'", "", "", "", "", "", "", "", "", u8"'.'", 
  u8"'$'", u8"'_'", u8"':'", u8"'('", u8"')'", u8"'['", u8"']'", u8"'{'", 
  u8"'}'", u8"','", u8"';'", u8"'+'", u8"'-'", u8"'*'", u8"'/'", u8"'>'", 
  u8"'<'", u8"'='", u8"'>='", u8"'<='", u8"'!='", u8"'&'", u8"'|'", u8"'!'", 
  u8"'^'", u8"'~'", u8"'<<'", u8"'>>'"
};

std::vector<std::string> MongodbCmdLexer::_symbolicNames = {
  "", u8"M_E", u8"M_TRUE", u8"M_FALSE", u8"M_NEW", u8"M_FUNCTION", u8"RUNCOMMAND", 
  u8"ADMINCOMMAND", u8"M_USE", u8"UNSIGNED_INTEGER", u8"APPROXIMATE_NUM", 
  u8"MONGO_OPERATORS", u8"IDENTIFIER", u8"ID_START_WITH_UNDERLINE", u8"M_STRINGS", 
  u8"BACK_SLASH_STRINGS", u8"REGEX_STRINGS", u8"DOT", u8"DOLLAR", u8"UNDERLINE", 
  u8"COLON", u8"LPAREN", u8"RPAREN", u8"LBRACKET", u8"RBRACKET", u8"LBRACE", 
  u8"RBRACE", u8"COMMA", u8"SEMI", u8"PLUS", u8"MINUS", u8"MULTI", u8"DIV", 
  u8"GT", u8"LT", u8"EQ", u8"GE", u8"LE", u8"NE", u8"AND", u8"OR", u8"NOT", 
  u8"XOR", u8"INVERT", u8"LSHIFT", u8"RSHIFT", u8"SPACES"
};

dfa::Vocabulary MongodbCmdLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MongodbCmdLexer::_tokenNames;

MongodbCmdLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x30, 0x14a, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
    0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 
    0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
    0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 
    0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 
    0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 
    0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 
    0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 
    0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 
    0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 
    0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 
    0x25, 0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 
    0x9, 0x28, 0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 
    0x2b, 0x4, 0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 
    0x4, 0x2f, 0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 
    0x32, 0x9, 0x32, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x6, 0xa, 0x9d, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x9e, 0x3, 0xb, 0x3, 
    0xb, 0x6, 0xb, 0xa3, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xa4, 0x5, 0xb, 0xa7, 
    0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xab, 0xa, 0xb, 0x3, 0xb, 0x6, 
    0xb, 0xae, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xaf, 0x5, 0xb, 0xb2, 0xa, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xb6, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 
    0xb9, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xbf, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xc2, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0xc8, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xcb, 0xb, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xd1, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0xd4, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0xda, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xdd, 0xb, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xe3, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0xe6, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0xea, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xee, 0xa, 0x11, 0xc, 
    0x11, 0xe, 0x11, 0xf1, 0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 0xf4, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x6, 0x2f, 
    0x136, 0xa, 0x2f, 0xd, 0x2f, 0xe, 0x2f, 0x137, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x7, 0x32, 0x141, 
    0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x144, 0xb, 0x32, 0x3, 0x32, 0x5, 0x32, 
    0x147, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x2, 0x2, 0x33, 0x3, 0x3, 0x5, 
    0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 
    0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 
    0x21, 0x12, 0x23, 0x13, 0x25, 0x14, 0x27, 0x15, 0x29, 0x16, 0x2b, 0x17, 
    0x2d, 0x18, 0x2f, 0x19, 0x31, 0x1a, 0x33, 0x1b, 0x35, 0x1c, 0x37, 0x1d, 
    0x39, 0x1e, 0x3b, 0x1f, 0x3d, 0x20, 0x3f, 0x21, 0x41, 0x22, 0x43, 0x23, 
    0x45, 0x24, 0x47, 0x25, 0x49, 0x26, 0x4b, 0x27, 0x4d, 0x28, 0x4f, 0x29, 
    0x51, 0x2a, 0x53, 0x2b, 0x55, 0x2c, 0x57, 0x2d, 0x59, 0x2e, 0x5b, 0x2f, 
    0x5d, 0x30, 0x5f, 0x2, 0x61, 0x2, 0x63, 0x2, 0x3, 0x2, 0xc, 0x4, 0x2, 
    0x47, 0x47, 0x67, 0x67, 0x4, 0x2, 0x2d, 0x2d, 0x2f, 0x2f, 0x4, 0x2, 
    0x26, 0x26, 0x61, 0x61, 0x5, 0x2, 0xc, 0xc, 0xf, 0xf, 0x24, 0x24, 0x5, 
    0x2, 0xc, 0xc, 0xf, 0xf, 0x62, 0x62, 0xa, 0x2, 0x2c, 0x2d, 0x30, 0x30, 
    0x32, 0x3b, 0x41, 0x41, 0x43, 0x5c, 0x5e, 0x5e, 0x60, 0x61, 0x63, 0x7c, 
    0x5, 0x2, 0xc, 0xc, 0xf, 0xf, 0x29, 0x29, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 
    0x22, 0x22, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 0x3, 0x2, 0x32, 0x3b, 
    0x2, 0x15d, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 0x3, 0x2, 0x2, 0x2, 0x2, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x53, 0x3, 0x2, 0x2, 0x2, 0x2, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x57, 0x3, 0x2, 0x2, 0x2, 0x2, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x3, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x67, 0x3, 0x2, 0x2, 0x2, 0x7, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x72, 0x3, 0x2, 0x2, 0x2, 0xb, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x7f, 0x3, 0x2, 0x2, 0x2, 0xf, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x13, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x15, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x19, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x1d, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x21, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0x23, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x25, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x29, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0x2d, 0xff, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x103, 0x3, 0x2, 0x2, 0x2, 0x33, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x107, 0x3, 0x2, 0x2, 0x2, 0x37, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x10d, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x113, 0x3, 0x2, 0x2, 0x2, 0x43, 0x115, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x47, 0x119, 0x3, 0x2, 0x2, 0x2, 0x49, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x124, 0x3, 0x2, 0x2, 0x2, 0x51, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x128, 0x3, 0x2, 0x2, 0x2, 0x55, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x59, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x131, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x135, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x61, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x63, 0x142, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x9, 0x2, 0x2, 0x2, 0x66, 0x4, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x76, 0x2, 0x2, 0x68, 0x69, 0x7, 0x74, 
    0x2, 0x2, 0x69, 0x6a, 0x7, 0x77, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x67, 0x2, 
    0x2, 0x6b, 0x6, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x68, 0x2, 0x2, 
    0x6d, 0x6e, 0x7, 0x63, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x6e, 0x2, 0x2, 0x6f, 
    0x70, 0x7, 0x75, 0x2, 0x2, 0x70, 0x71, 0x7, 0x67, 0x2, 0x2, 0x71, 0x8, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x70, 0x2, 0x2, 0x73, 0x74, 0x7, 
    0x67, 0x2, 0x2, 0x74, 0x75, 0x7, 0x79, 0x2, 0x2, 0x75, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x77, 0x7, 0x68, 0x2, 0x2, 0x77, 0x78, 0x7, 0x77, 0x2, 
    0x2, 0x78, 0x79, 0x7, 0x70, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x65, 0x2, 0x2, 
    0x7a, 0x7b, 0x7, 0x76, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x6b, 0x2, 0x2, 0x7c, 
    0x7d, 0x7, 0x71, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x70, 0x2, 0x2, 0x7e, 0xc, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x74, 0x2, 0x2, 0x80, 0x81, 0x7, 
    0x77, 0x2, 0x2, 0x81, 0x82, 0x7, 0x70, 0x2, 0x2, 0x82, 0x83, 0x7, 0x45, 
    0x2, 0x2, 0x83, 0x84, 0x7, 0x71, 0x2, 0x2, 0x84, 0x85, 0x7, 0x6f, 0x2, 
    0x2, 0x85, 0x86, 0x7, 0x6f, 0x2, 0x2, 0x86, 0x87, 0x7, 0x63, 0x2, 0x2, 
    0x87, 0x88, 0x7, 0x70, 0x2, 0x2, 0x88, 0x89, 0x7, 0x66, 0x2, 0x2, 0x89, 
    0xe, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x63, 0x2, 0x2, 0x8b, 0x8c, 
    0x7, 0x66, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x6f, 0x2, 0x2, 0x8d, 0x8e, 0x7, 
    0x6b, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x70, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x45, 
    0x2, 0x2, 0x90, 0x91, 0x7, 0x71, 0x2, 0x2, 0x91, 0x92, 0x7, 0x6f, 0x2, 
    0x2, 0x92, 0x93, 0x7, 0x6f, 0x2, 0x2, 0x93, 0x94, 0x7, 0x63, 0x2, 0x2, 
    0x94, 0x95, 0x7, 0x70, 0x2, 0x2, 0x95, 0x96, 0x7, 0x66, 0x2, 0x2, 0x96, 
    0x10, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x77, 0x2, 0x2, 0x98, 0x99, 
    0x7, 0x75, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x67, 0x2, 0x2, 0x9a, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x61, 0x31, 0x2, 0x9c, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x14, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa7, 0x5, 0x63, 0x32, 0x2, 0xa1, 0xa3, 0x5, 0x61, 0x31, 0x2, 
    0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x9, 0x2, 
    0x2, 0x2, 0xa9, 0xab, 0x9, 0x3, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xae, 0x5, 0x61, 0x31, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb7, 0x7, 0x26, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0x5f, 0x30, 
    0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xc0, 
    0x5, 0x5f, 0x30, 0x2, 0xbb, 0xbf, 0x5, 0x5f, 0x30, 0x2, 0xbc, 0xbf, 
    0x5, 0x61, 0x31, 0x2, 0xbd, 0xbf, 0x9, 0x4, 0x2, 0x2, 0xbe, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x1a, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc9, 0x7, 0x61, 0x2, 0x2, 0xc4, 
    0xc8, 0x5, 0x5f, 0x30, 0x2, 0xc5, 0xc8, 0x5, 0x61, 0x31, 0x2, 0xc6, 
    0xc8, 0x9, 0x4, 0x2, 0x2, 0xc7, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0x1c, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xd2, 0x7, 0x24, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x5e, 0x2, 0x2, 
    0xce, 0xd1, 0x7, 0x24, 0x2, 0x2, 0xcf, 0xd1, 0xa, 0x5, 0x2, 0x2, 0xd0, 
    0xcd, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd6, 0x7, 0x24, 0x2, 0x2, 0xd6, 0x1e, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xdb, 0x7, 0x62, 0x2, 0x2, 0xd8, 0xda, 0xa, 0x6, 0x2, 0x2, 
    0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x7, 
    0x62, 0x2, 0x2, 0xdf, 0x20, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe4, 0x7, 0x31, 
    0x2, 0x2, 0xe1, 0xe3, 0x9, 0x7, 0x2, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 0x7, 0x31, 0x2, 0x2, 0xe8, 0xea, 
    0x5, 0x5f, 0x30, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xef, 0x7, 0x29, 
    0x2, 0x2, 0xec, 0xee, 0xa, 0x8, 0x2, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf4, 0x7, 0x29, 0x2, 0x2, 0xf3, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xf3, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x22, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x30, 0x2, 0x2, 0xf6, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf8, 0x7, 0x26, 0x2, 0x2, 0xf8, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfa, 0x7, 0x61, 0x2, 0x2, 0xfa, 0x28, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0xfc, 0x7, 0x3c, 0x2, 0x2, 0xfc, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfe, 0x7, 0x2a, 0x2, 0x2, 0xfe, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 
    0x7, 0x2b, 0x2, 0x2, 0x100, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 
    0x7, 0x5d, 0x2, 0x2, 0x102, 0x30, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0x7, 0x5f, 0x2, 0x2, 0x104, 0x32, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 
    0x7, 0x7d, 0x2, 0x2, 0x106, 0x34, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
    0x7, 0x7f, 0x2, 0x2, 0x108, 0x36, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x7, 0x2e, 0x2, 0x2, 0x10a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
    0x7, 0x3d, 0x2, 0x2, 0x10c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
    0x7, 0x2d, 0x2, 0x2, 0x10e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 
    0x7, 0x2f, 0x2, 0x2, 0x110, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 
    0x7, 0x2c, 0x2, 0x2, 0x112, 0x40, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 
    0x7, 0x31, 0x2, 0x2, 0x114, 0x42, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
    0x7, 0x40, 0x2, 0x2, 0x116, 0x44, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
    0x7, 0x3e, 0x2, 0x2, 0x118, 0x46, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 
    0x7, 0x3f, 0x2, 0x2, 0x11a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 
    0x7, 0x40, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x3f, 0x2, 0x2, 0x11d, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x3e, 0x2, 0x2, 0x11f, 0x120, 
    0x7, 0x3f, 0x2, 0x2, 0x120, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
    0x7, 0x23, 0x2, 0x2, 0x122, 0x123, 0x7, 0x3f, 0x2, 0x2, 0x123, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x28, 0x2, 0x2, 0x125, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 0x7e, 0x2, 0x2, 0x127, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x23, 0x2, 0x2, 0x129, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x60, 0x2, 0x2, 0x12b, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x80, 0x2, 0x2, 0x12d, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x3e, 0x2, 0x2, 0x12f, 0x130, 
    0x7, 0x3e, 0x2, 0x2, 0x130, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 
    0x7, 0x40, 0x2, 0x2, 0x132, 0x133, 0x7, 0x40, 0x2, 0x2, 0x133, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x136, 0x9, 0x9, 0x2, 0x2, 0x135, 0x134, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x8, 0x2f, 0x2, 0x2, 0x13a, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x9, 0xa, 0x2, 0x2, 0x13c, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13e, 0x9, 0xb, 0x2, 0x2, 0x13e, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x141, 0x5, 0x13, 0xa, 0x2, 0x140, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 0x147, 0x7, 0x30, 
    0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x5, 0x13, 
    0xa, 0x2, 0x149, 0x64, 0x3, 0x2, 0x2, 0x2, 0x18, 0x2, 0x9e, 0xa4, 0xa6, 
    0xaa, 0xaf, 0xb1, 0xb7, 0xbe, 0xc0, 0xc7, 0xc9, 0xd0, 0xd2, 0xdb, 0xe4, 
    0xe9, 0xef, 0xf3, 0x137, 0x142, 0x146, 0x3, 0x2, 0x3, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MongodbCmdLexer::Initializer MongodbCmdLexer::_init;
