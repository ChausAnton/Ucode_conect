#include <unistd.h>

void mx_printstr(const char *);

int mx_strlen(const char *);

void mx_printchar(char);

void mx_printint(int);

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printint(int n) {
    char c[55];
    long n1 = n;
    int i = 0;

    if (n == 0) 
        mx_printchar(0+'0');
    if (n1 < 0) {
        n1 = n1 * -1;
        mx_printchar('-');
    }

    while (n1 != 0) {
        c[i++] = (n1 % 10) + '0';
        n1 = n1 / 10;
    }

    for (int j = i - 1; j >= 0; j--)
        mx_printchar(c[j]);
}

void mx_printstr(const char *s) {
     int len = mx_strlen(s);
     write(1, s, len);
}

int mx_strlen(const char *s) {
    int j = 0;
    char i = s[0];
    while (i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}


int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}
