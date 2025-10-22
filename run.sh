#!/bin/bash

if [ -z "$1" ]; then
  echo "usage: ./run.sh <file.cpp>"
  exit 1
fi 

filename=$(basename "$1" .cpp)
output="./build/${filename}"

echo "run compiling $1 ..."
g++ "$1" -o "$output"

if [ $? -ne 0 ]; then
  echo "compilation failed."
  exit 1
fi 

echo "lets running program ${filename} ..."
echo "----------------------------"
"$output"
echo "----------------------------"
