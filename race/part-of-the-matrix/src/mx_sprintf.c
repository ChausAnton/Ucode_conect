#include "../inc/header.h"

char *mx_sprintf(int num) {
    int length = 0;
    int temp_number = num;
    for (;temp_number != 0 ;length++){
        temp_number = temp_number / 10;
    }
    temp_number = num;

    char *str = mx_strnew(length);
    for (int i = 0; i < length; i++){
        str[i] = (temp_number % 10) + 48;
        temp_number = temp_number / 10;
    }
    length--;
    for (int i = 0; i < length; i++, length--) {
        char temp1 = str[i];
        str[i] = str[length];
        str[length] = temp1;
    }
    return str;
}
