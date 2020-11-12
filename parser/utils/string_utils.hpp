#ifndef __STRING_UTILS_H__
#define __STRING_UTILS_H__

#include <string>
#include <string.h>
#include <libgen.h>

namespace utils {
class StringUtils  {
public:
  StringUtils() {}
  virtual ~StringUtils() {}

  /**
   * @fn StrCmp
   * @brief string compare
   * @param 
   * @return zero if lhs==rhs, otherwise non-zero
   * @author Jona
   * @date 16/10/2020 16:10:48 
  */ 
  static bool StrCmp(const std::string& lhs, const std::string rhs) {
    if (lhs.size() != rhs.size()) {
      return false;
    }

    return strcmp(lhs.c_str(), rhs.c_str()) == 0;
  }

  static bool StrCaseCmp(const std::string& lhs, const std::string& rhs) {
    if (lhs.size() != rhs.size()) {
      return false;
    }

    return strcasecmp(lhs.c_str(), rhs.c_str()) == 0;
  }

  static std::string BaseName(const std::string& path) {
    char* base = basename((char*)(path.c_str()));
    return std::string(base);
  }

  // del \" , \' and blanks at the head or end of str
  static std::string TrimQuoted(std::string str) {
    if (str.at(0) == '"' || str.at(0) == '\'') {
      str = str.substr(1);
    }

    if (str.at(str.length()-1) == '"'
        || str.at(str.length()-1) == '\'') {
      str = str.substr(0, str.length()-1);
    }

    return str;
  }
};
} /* end utils */

#endif /* __STRING_UTILS_H__ */
