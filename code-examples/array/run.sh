#!/usr/bin/env bash
set -e

rm -rf ./build
mkdir build
clang ./array.c -o ./build/out
./build/out