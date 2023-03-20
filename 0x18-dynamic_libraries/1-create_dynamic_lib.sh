#!/bin/bash
gcc -fPIC -c *.c
fcc -shared -o liball.so *.o
