#!/bin/sh -e
gcc -c *.c
ar cr liball.so *.o