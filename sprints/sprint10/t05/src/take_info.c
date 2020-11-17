#include "../inc/header.h"

char *take_info(char *str) {
    int lenght = 0;
    for (int i = 0; mx_isspace(str[i]); i++) {
        lenght++;
    }
    return mx_strncpy(mx_strnew(lenght), str, lenght);
}
