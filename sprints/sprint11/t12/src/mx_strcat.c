#include "../inc/header.h"

char *mx_strcat(char *s1, const char *s2) {
    int size1 = mx_strlen(s1);
    int size2 = mx_strlen(s2);
    for (int i = size1, z = 0; z < size2; i++, z++) {
        if(s1) {
            s1[i] = s2[z];
        }
        else {
            return s1;
        }      
    }
    return s1;
}
