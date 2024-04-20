#!/usr/bin/env bash
set -e

rm -rf ./build
mkdir build
clang ./linear-search-string.c -o ./build/out
./build/out