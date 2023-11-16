#!/bin/sh
gcc -c -Wall -Werror -Wextra *.c
ar -crs libft.a *.o
rm -f *.o
