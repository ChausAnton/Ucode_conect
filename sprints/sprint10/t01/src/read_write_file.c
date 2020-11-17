#include "../inc/header.h"

void read_file(char *argv[]) {

    int fp = open(argv[1], O_RDONLY);
    if (fp == -1) {
        mx_printerr("error\n");
        return;
    }

    int dfp = open(argv[2], O_RDONLY);
    if(dfp != -1) {
        exit(0);
    }

    if((dfp = open(argv[2], O_CREAT)) == -1) {
        mx_printerr("error\n");
        return;
    }
    if (close(dfp) < 0) {
        mx_printerr("error\n");
        return;
    }
    if((dfp = open(argv[2], O_WRONLY)) == -1) {
        mx_printerr("error\n");
        return;
    }

    char buffer[1];
    int bytes_read = 1;
    while(bytes_read != 0) {
        bytes_read = read(fp, buffer, 1);
        if(bytes_read == 0) continue;
        write(dfp, buffer, 1);
    }
    if (close(fp) < 0) {
        mx_printerr("error\n");
        return;
    }
}
