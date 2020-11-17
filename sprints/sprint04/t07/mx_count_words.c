int mx_count_word(const char *str, char delimiter) {
    int count = 0;
    int check = 0;
    int index = 0;
    int next_delimiter = 0;
    for (int i= 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter) {
            for (int j = index; str[j] != '\0'; j++) {
                if (j < i && str[j] != delimiter && str[j] != ' ' && check != 1) {
                    count++;
                    check = 1;
                }
                else if (j > i && str[j] == delimiter) {
                    next_delimiter = 1;
                }
            }
            index = i;
            if (next_delimiter == 0) {
                check = 0;
                for (int j = i; str[j] != '\0'; j++) {
                    if (j > i && str[j] != delimiter && str[j] != ' ' && check != 1) {
                        count++;
                        check = 1;
                    }
                }
                return count;
            }
            check = 0;
            next_delimiter = 0;
        }
    }
    return count;
}
