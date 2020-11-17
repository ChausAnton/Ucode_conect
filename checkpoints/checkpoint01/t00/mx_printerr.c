#include <unistd.h>

int mx_strlen(const char *);

void mx_printerr(const char *);

int mx_strlen(const char *s) {
    int j = 0;
    char i = s[0];
    while (i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}

void mx_printerr(const char *s) {
    int len = mx_strlen(s);
    write(2, s, len);
}
