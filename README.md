# mongo_command_transfer
A tool for parsing mongo runCommand and transfer it to mongo shell command.

# build
You can run `build.sh` directory, or run following shell commands.

```shell 
mkdir build
cmake .. -DCMAKE_BUILD_TYPE=Debug
make
```

If build successfully, the executed file named `mongocmd_transfer` will be outputed to `test/bin/`. run `test.sh` in `test/bin` to see testing results.
