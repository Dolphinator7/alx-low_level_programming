#!/bin/bash

gcc -wall -werror -wextra -pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
