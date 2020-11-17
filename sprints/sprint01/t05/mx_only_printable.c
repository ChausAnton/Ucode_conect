#include <stdio.h>

void mx_printchar(char);

void mx_only_printable(void);

void mx_only_printable(void) {
    for (int i = 126; i >= 32; i--) {
        char c = i;
        mx_printchar(c);
    }
    mx_printchar('\n');
}
