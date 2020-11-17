#include <stdbool.h>
#include <stdlib.h>

bool mx_isspace(char);

char *mx_strcpy(char *, const char *, int);

char *mx_strnew(const int);

void mx_strdel(char **);

int mx_strlen(const char *);

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    while(mx_isspace(*str)) str++;
    char *res = mx_strnew(mx_strlen(str));
    if(res == NULL) return NULL;
    res = mx_strcpy(res, str, mx_strlen(str));

    int i = mx_strlen(res) - 1;
    while(mx_isspace(str[i])) {
        i--;
    }
    res[i+1] = '\0';
    
    char *fin_res = mx_strnew(mx_strlen(res));
    if(fin_res == NULL) return NULL;
    fin_res = mx_strcpy(fin_res, res, mx_strlen(res));
    mx_strdel(&res);

    return fin_res;
}
