#include <stdlib.h>

char *mx_strcpy(char *, const char *, int);

int mx_strlen(const char *);

char *mx_strnew(const int);

char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);

    char *DupStr = mx_strnew(lenght);
    if(DupStr == NULL) {
        return NULL;
    }
    return mx_strcpy(DupStr, str, lenght);
}
