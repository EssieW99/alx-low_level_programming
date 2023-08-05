#!/bin/bash
gcc -c *.c -o *.o
ar rcs liball.a *.o
ranlib liball.a
