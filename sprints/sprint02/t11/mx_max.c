int mx_max(int, int, int);

int mx_max(int a, int b, int c) {
    int max = a > b ? a : b;

    if (max < c) {
        return c;
    }

    return max;
}
