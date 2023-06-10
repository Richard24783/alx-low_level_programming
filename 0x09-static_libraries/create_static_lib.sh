#!/bin/bash
gcc -Wall -pendatic -Wextra -c *.c
ar -rc liball.a *.o 
ranlib liball.a
