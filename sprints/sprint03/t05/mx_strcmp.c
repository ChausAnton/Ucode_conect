int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
    int pos = 0;
    int neg = 0;
    while(s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] > s2[i]) {
            pos++;
        }
        else if (s1[i] < s2[i]) {
            neg -= 1;
        }

        i++;
    }

    if ((neg * -1) > pos) {
        return neg;
    }
    else if (pos > (neg * -1)) {
        return pos;
    }
    return 0;
}
