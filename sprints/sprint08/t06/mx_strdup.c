#include "create_agent.h"

char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);

    char *DupStr = mx_strnew(lenght);
    if(DupStr == NULL) {
        return NULL;
    }
    return mx_strcpy(DupStr, str);
}
