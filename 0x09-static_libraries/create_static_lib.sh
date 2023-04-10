#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar -rcs liball.a *.o
