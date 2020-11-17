int mx_gcd(int a, int b){
    if (a < 0) {
        a = a * -1;
    }
    if(b < 0) {
        b = b* -1;
    }
    if (b != 0)
        return mx_gcd(b, a % b);
    else
        return a;
}
