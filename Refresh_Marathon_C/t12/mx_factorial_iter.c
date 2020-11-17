int mx_factorial_iter(int n) {
    if (n < 0 || n > 12)
        return 0;

    int count = 1;
    
    for (int i = 1; i <= n; i++) {
        double temp = count * i;
        if (temp > 2147483647) {
            return 0;
        }
        count *= i;
    }
    return count;
}
