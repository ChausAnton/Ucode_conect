#include "get_address.h"

char *mx_get_address(void *p) {
    unsigned long b = (unsigned long)p;
    char *str = mx_nbr_to_hex(b);
    int size = mx_strlen(str);
    char *res = mx_strnew(size + 2);
    *res = '0';
    res++;
    *res = 'x';
    res++;
    res = mx_strcpy(res, str);
    res--;
    res--;
    return res;

}
