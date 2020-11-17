#include <stdbool.h>
#include <stdlib.h>

bool mx_isspace(char);

char *mx_strcpy(char *, const char *, int);

char *mx_strnew(const int);

void mx_strdel(char **);

int mx_strlen(const char *);

char *mx_strtrim(const char *);

char *mx_del_extra_whitespaces(const char *str) {
    char *res = mx_strtrim(str);
    if(res == NULL) return NULL;
    char *temp = mx_strnew(mx_strlen(res));
    if(temp == NULL) return NULL;
    int j=0;
    for (int i = 0; i < mx_strlen(res); i++) {
        if(mx_isspace(res[i])) {
            if(mx_isspace(res[i + 1])) {
                continue;
            }
        }
        temp[j] = res[i];
        j++;
    }
    mx_strdel(&res);
    res = mx_strnew(mx_strlen(temp));
    if(res == NULL) return NULL;
    res = mx_strcpy(res, temp, mx_strlen(temp));
    mx_strdel(&temp);
    return res;
}
