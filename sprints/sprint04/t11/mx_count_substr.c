char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int counter = 0;
    const char *tempStr = str;

    while (mx_strstr(tempStr, sub)) {
        tempStr = mx_strstr(tempStr, sub);
        for (int i = 0; i < mx_strlen(sub); i++) {
            tempStr++;
        }
        counter++;
    }
    return counter;
}
