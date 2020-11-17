int mx_strcmp(const char *s1, const char *s2, int n);

int mx_linear_search(char **arr, const char *s) {
    for (int i = 0; arr[i] != NULL; i++) {
        int lenght = 0;
        while(arr[i][lenght] != '\0') {
            lenght++;
        }
        if (mx_strcmp(arr[i], s, lenght) == 0) {
            return i;
        }
    }
    return -1;
}
