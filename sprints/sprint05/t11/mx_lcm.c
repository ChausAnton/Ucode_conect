int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    return a / mx_gcd(a, b) * b;
}
