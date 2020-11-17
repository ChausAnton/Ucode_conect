char *mx_strcpy(char *dst, const char *src, int len) {
    int i = 0;
    while (src[i] != '\0') {
        if (i == len) {
            return (char *) dst;
        }
        dst[i] = src[i];
        i++;
    }
    return (char *) dst;
}
