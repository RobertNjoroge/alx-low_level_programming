#!/bin/bash
gcc -Wall -Werror -c *.c
ar rc liball.a * .o
ranlib liball.a
