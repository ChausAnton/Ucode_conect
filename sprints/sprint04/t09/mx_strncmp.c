int mx_strncmp(const char *s1, const char *s2, int n) {
     for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) {
            continue;
        } 
        else {
            return ((int)s1[i] - (int)s2[i]);
        }
    }
    return 0;
}
