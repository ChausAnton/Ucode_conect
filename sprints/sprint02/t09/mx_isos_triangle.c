void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    unsigned int j = 2;
    
    for (unsigned int i = 1; i <= length; i++) {
        if (j == i) {
            mx_printchar('\n');
            i = 0;
            j++;
        }
        else if (length != 0) {
            mx_printchar(c);
        }
    }
    if (length != 0) {
        mx_printchar('\n');
    }
}
