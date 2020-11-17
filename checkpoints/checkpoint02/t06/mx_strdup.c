#include <stdlib.h>

char *mx_strcpy(char *, const char *, int);

int mx_strlen(const char *);

char *mx_strnew(const int);

int mx_strlen(const char *s) {
    int j = 0;
    char i = s[0];
    while (i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}

char *mx_strcpy(char *dst, const char *src, int len) {
    int i = 0;
    while (src[i] != '\0') {
        if (i == len) {
            return (char *) dst;
        }
        dst[i] = src[i];
        i++;
    }
    return (char *) dst;
}

char *mx_strnew(const int size) {

    char *str = (char*) malloc((size + 1) * sizeof(char));

    if (str == NULL || size < 0) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        str[i] = '\0';
    }
    str[size] = '\0';
    return str;
}

char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);

    char *DupStr = mx_strnew(lenght);
    if(DupStr == NULL) {
        return NULL;
    }
    return mx_strcpy(DupStr, str, lenght);
}
