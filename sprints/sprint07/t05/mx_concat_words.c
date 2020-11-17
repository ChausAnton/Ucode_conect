#include <stdlib.h>
int mx_strlen(const char *);

char *mx_strcat(char *, const char *);

char *mx_strcpy(char *, const char *, int);

void mx_strdel(char **);

char *mx_strdup(const char *);

char *mx_strjoin(char const *, char const *);

int mx_strlen(const char *);

char *mx_strnew(const int);

char *mx_concat_words(char **words) {
    if (words == NULL) {
        return NULL;
    }
    int length = 0;
    while(words[length] != NULL) {
        length++;
    }

    char *res = NULL;
    char *str;
    for (int i = 0; i < length - 1; i++) {
        str = mx_strjoin(words[i], " ");
        if(str == NULL) return NULL;
        res = mx_strjoin(res, str);
        if(res == NULL) return NULL;
        mx_strdel(&str);
    }
    res = mx_strjoin(res, words[length - 1]);
    if(res == NULL) return NULL;
    return res;
}
