#!/bin/bash
gcc -c -fpic *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
