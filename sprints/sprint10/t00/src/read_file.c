#include "../inc/header.h"

void read_file(char *argv[]) {
    int fp = open(argv[1], O_RDONLY);
    if (fp == -1) {
        mx_printerr("error\n");
        return;
    }
    char buffer[1];
    int bytes_read = 1;
    while(bytes_read != 0) {
        bytes_read = read(fp, buffer, 1);
        if(bytes_read == 0) continue;
        mx_printchar(buffer[0]);
    }
    if (close(fp) < 0) {
        mx_printerr("error\n");
        return;
    }
}
