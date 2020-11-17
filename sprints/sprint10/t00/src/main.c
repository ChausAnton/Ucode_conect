#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if(argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return 0;
    }
    read_file(argv);
}
