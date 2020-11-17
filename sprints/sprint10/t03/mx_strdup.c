#include "file_to_str.h"

char *mx_strdup(const char *str) {
    int size = mx_strlen(str);
    char *result = mx_strnew(size);
    return (mx_strcpy(result,str));
}
