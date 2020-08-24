#!/usr/bin/env bash

echo "Removing .git"
rm -rf .git

echo "Compiling files..."
gcc -Wall main.c -o main
gcc -Wall makeFile.c -o makeFile
gcc -Wall editFile.c -o editFile

read -p "Would you like to start using FMOE? (y/n) " input
if [ "$input" = "y" ]; then
  echo "Starting FMOE... "
  ./main
elif [ "$input" = "n" ]; then
    exit
else
  exit
fi


