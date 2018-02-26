#!/bin/sh

clang -c -std=c99 $2 -emit-llvm $1

filename=$(basename $1)
first_name="${filename%.*}"

llvm-dis $first_name.bc
