#!/bin/bash
gcc -fPIC -c ./*.c
cc -shared -o liball.so ./*.o
