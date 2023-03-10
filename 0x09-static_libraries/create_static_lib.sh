#!/bin/bash
gcc -Wall -pedantic -Wwrror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
