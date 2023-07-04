#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu98 -c *.c
ar -rcs liball.a *.o
