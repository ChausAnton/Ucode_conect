#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if(argc != 3) {
        mx_printerr("usage: ./read_file [file_path] [destination_file]\n");
        return 0;
    }
    read_file(argv);
}
