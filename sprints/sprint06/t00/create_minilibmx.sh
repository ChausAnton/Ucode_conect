clang -c -std=c11 -Wall -Wextra -Werror -Wpedantic *.c
ar r minilibmx.a *.o
rm *.o
