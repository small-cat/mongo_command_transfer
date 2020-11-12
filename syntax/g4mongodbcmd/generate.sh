#!/bin/bash
set -o errexit
java -jar ../../tool/antlr-4.7.1-complete.jar -Dlanguage=Cpp -listener -visitor -o ../generated/ -package mongodbcmd MongodbCmdLexer.g4 MongodbCmdParser.g4
sed -i 's/;;/;/g' ../generated/MongodbCmdParser.h
