#!/bin/bash
gcc -shared -o printer.so -fPIC gamer.c
export LD_PRELOAD=./printer.so:$LD_LIBRARY_PATH
