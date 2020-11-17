void mx_printchar(char);

void mx_str_separate(const char *str, char delim) {
    int i = 0;
    int index;
    
    while (str[i] != '\0') {
        if (str[i] == delim) {
            if (index == 0) {
                index = 1;
                mx_printchar('\n');
            }
        }
        else {
            index = 0;
            mx_printchar(str[i]);
        }
        i++;
    }
}
