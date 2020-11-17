#include <stdio.h>

void mx_printchar(char);

void mx_hexadecimal(void);

void mx_hexadecimal(void) {
    for (int i = 0; i<= 15; i++) {
        char c;
        c = i < 10 ? i + 48 : i + 55;
        mx_printchar(c);   
    }
    mx_printchar('\n'); 
}
