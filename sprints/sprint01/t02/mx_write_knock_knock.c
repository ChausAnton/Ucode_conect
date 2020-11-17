#include <stdio.h>
#include <string.h>
#include <unistd.h>

void mx_write_knock_knock(void);

void mx_write_knock_knock(void) {
    write(1, "Follow the white rabbit.\nKnock, knock, Neo.\n", strlen("Follow the white rabbit.\nKnock, knock, Neo.\n"));
}
