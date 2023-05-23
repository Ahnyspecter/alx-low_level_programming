#!/bin/bash
gcc -Wall -wextra -Werror -padantic -c -fPIC *.c
gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
