#include "../inc/header.h"

char *mx_strstr(const char *str, const char *find) {
    if(!str)
        return NULL;
    while(str) {
        str = mx_strchr(str,find[0]);
        for (int z = 0; z < mx_strlen(find); z++) {
            if (!str)
                return NULL;
            if(str[z] == find[z]) {
                if(z == (mx_strlen(find)-1)){
                    return (char *) &str[z+1];
                }
            }
            else {
                str++;
                break;
            }
        }  
    }
    return NULL;
}
