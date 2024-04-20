#!/usr/bin/env bash
set -e

rm -rf ./build
mkdir build
clang ./phonebook.c -o ./build/out
./build/out