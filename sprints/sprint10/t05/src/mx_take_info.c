#include "../inc/header.h"

char  *mx_take_info(const char *str) {
    int size = 0;
    for (int i = 0; str[i]; i++) {
        if(!mx_isspace(str[i]))
            size++;
        else
            break;
    }
    return mx_strncpy(mx_strnew(size),str,size);
    
}
