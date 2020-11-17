#include <unistd.h>

int mx_strlen(const char *);

void mx_printstr(const char *);

int mx_strlen(const char *s) {
    int j = 0;
    char i = s[0];
    while (i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}

void mx_printstr(const char *s) {
     int len = mx_strlen(s);
     write(1, s, len);
}

int main(int argc, char *argv[]) {
    for(int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printstr("\n");
    }
}
