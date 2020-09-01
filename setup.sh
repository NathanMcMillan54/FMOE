#!/usr/bin/env bash

echo "Removing .git"
rm -rf .git
rm -rf .gitignore

echo "Compiling files..."
gcc -Wall FMOE.c -o FMOE
gcc -Wall makeFile.c -o makeFile
gcc -Wall editFile.c -o editFile
gcc -Wall help.c -o help

read -p "Would you like to start using FMOE? (y/n) " input
if [ "$input" = "y" ]; then
  echo "Starting FMOE... "
  ./FMOE
elif [ "$input" = "n" ]; then
    exit
else
  exit
fi


