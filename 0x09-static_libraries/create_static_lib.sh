#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
ar -rcran liball.a *.o
