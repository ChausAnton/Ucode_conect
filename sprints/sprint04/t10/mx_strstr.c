char *mx_strchr(const char *, int);

int mx_strlen(const char *);

int mx_strncmp(const char *, const char *, int);

char *mx_strstr(const char *s1, const char *s2) {
    int size2 = mx_strlen(s2);      
    int size1 = mx_strlen(s1);
    for (int count = 0; count < size1; s1++, count++)
    {
        char *temp = mx_strchr(s1, s1[0]);
        if(mx_strncmp(temp, s2, size2) == 0) {
            return (char*) s1;
        }
    }
    return 0;
}
