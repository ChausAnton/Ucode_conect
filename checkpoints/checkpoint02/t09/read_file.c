#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int mx_strlen(const char *s) {
    int j = 0;
    char i = s[0];
    while (i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}

void mx_printstr(const char *s){
    write(1, s, mx_strlen(s));
}

void mx_printerr(const char *s) {
    int len = mx_strlen(s);
    write(2, s, len);
}

void mx_printchar(char c) {
    char text[] = "0";
    text[0] = c;
    write(1, text, 1);
}

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

int main(int argc, char *argv[]) {
    if(argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return 0;
    }
    read_file(argv);
}
