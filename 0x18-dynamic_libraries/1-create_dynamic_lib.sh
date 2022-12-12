#!/bin/bash
#gcc -fPIC -c *.c && gcc -shared -o liball.so *.o
gcc -fPIC -shared -o liball.so *.c
