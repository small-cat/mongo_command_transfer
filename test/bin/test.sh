#!/bin/bash

for m in $(ls ../); do
  echo "file:${m}"
  ./mongodbcmd_transfer -f ../$m
  echo
done
