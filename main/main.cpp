// Copyright (C) 2019 secsmart
// author: owen lee

#include <unistd.h>
#include <iostream>
#include <fstream>
#include <fstream>
#include <vector>

#include "../parser/mongodb_parser.h"
#include "../parser/iparser.h"

#define AX(x) _AX(x)
#define _AX(x) #x

#ifdef CMDVERSION
#define PROG_VERSION AX(CMDVERSION)
#else
#define PROG_VERSION "0.0.1"
#endif

using namespace mongo_parser;

void PrintUsage(const char* str);
void HelloSesame();
void PrintVersion();
void ParseString(std::string sql);
void ParseFile(const std::string& file_name);
void TravelInfo(std::vector<OperateInfo>& infos);

int main(int argc, char *argv[]) {
  if (1 == argc) {
    PrintUsage(argv[0]);
  }
  int opt = 0;
  while ((opt = getopt(argc, argv, "f:e:v")) != -1) {
    if (opt == 'f') {
      ParseFile(optarg);
    } else if (opt == 'e') {
      ParseString(optarg);
    } else if (opt == 'v') {
      PrintVersion();
    } else {
      PrintUsage(argv[0]);
    }
  }
  
  return 0;
}

void PrintUsage(const char* str) {
  HelloSesame();
  std::cout << "\nUsage: " << str
            << " [-f filename] [-e sqlstatment] [-v]" << "\n";
}

void ParseString(std::string sql) {
  IParser* parser = new MongodbParser();
  std::vector<OperateInfo> infos;
  parser->Parse(sql, infos);

#ifdef DEBUG_0
  TravelInfo(infos);
#endif

  delete parser;
}

void ParseFile(const std::string& file_name) {
  std::ifstream f(file_name);
  if (!f.is_open()) {
    std::cout << "file open failed: " << file_name << std::endl;
    return;
  }

  std::string result;
  std::string tmp;
  while (getline(f, tmp)) {
    result += tmp;
  }
  f.close();

  std::cout << "original ----->>>>>" << std::endl;
  std::cout << result << std::endl;

  ParseString(result);
}

void TravelInfo(std::vector<OperateInfo>& infos) {
  std::cout << "\n============ Travel Operate Info ============" << std::endl;
  for (auto& info: infos) {
    std::cout << "operate:" << info.operate << std::endl;
    std::cout << "operateType:" << info.operateType << std::endl;
    std::cout << "objects:" << std::endl;
    for (auto& obj : info.objects) {
      std::cout << "  objectName:" << obj.objectName << std::endl;
      if (obj.subObjectName.empty()) {
        continue;
      }

      std::cout << "  subObjectName:" << std::endl;
      for (auto& subname : obj.subObjectName) {
        std::cout << "    " << subname << std::endl;
      }
    }
  }
  std::cout << std::endl;
}

void HelloSesame() {
  printf("   .--,       .--,\n");
  printf("  ( (  \\.---./  ) )\n");
  printf("   '.__/o   o\\__.'\n");
  printf("      {=  ^  =}\n");
  printf("       >  -  <\n");
  printf(" __.\"\"`-------`\"\".__\n");
  printf("/         #         \\\n");
  printf("\\    hello sesame   /\n");
  printf("/    hello sesame   \\\n");
  printf("\\___________________/\n");
  printf("     ___)( )(___\n");
  printf("    (((__) (__)))\n");
  printf("\n");
}

void PrintVersion() {
  std::cout << "A tool to transfer mongo runCommand to mongo shell command" << std::endl;
  std::cout << "current version is " << PROG_VERSION << std::endl;
}
