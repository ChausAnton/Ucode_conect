#include <stdlib.h>
#include <stdio.h>
int mx_count_word(const char *, char);

char *mx_strcpy(char *, const char *, int);
 
void mx_strdel(char **);

char *mx_strnew(const int);

char **mx_strsplit(char const *s, char c) {
    if(s == NULL) return NULL;

    int length = 0;
    for(; s[length] != '\0'; length++);
    char *str = mx_strnew(length);
    if(str == NULL) return NULL;
    str = mx_strcpy(str, s, length);
    
    char *res[mx_count_word(s, c) + 1];

    for (int i = 0; i < mx_count_word(s, c); i++) {
        while(*str == c) {
            str++;
        }
        res[i] = str;
        while(*str != c) {
            str++;
        }
        *str = '\0';
        str++;
    }
    res[mx_count_word(s, c) + 1] = NULL;

    char **fin_res = malloc((mx_count_word(s, c) + 1) * sizeof(char*));
    if(fin_res == NULL) return NULL;
    for (int i = 0; i < mx_count_word(s, c); i++){
        int len = 0;
        while(res[i][len] != '\0') len++;
        fin_res[i] = mx_strnew(len);
        if(fin_res[i] == NULL) return NULL;
    }
    
    for (int i = 0; i < mx_count_word(s, c); i++) {
        int len = 0;
        while(res[i][len] != '\0') len++;
        fin_res[i] = mx_strcpy(fin_res[i], res[i], len);
    }
    fin_res[mx_count_word(s, c) + 1] = NULL;

    for (int i = 0; i < mx_count_word(s, c); i++) {
        res[i] = NULL;
    }
    return fin_res;
}
