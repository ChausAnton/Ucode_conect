double mx_pow(double n, unsigned int pow) {
    double temp = 1;
    
    for (unsigned int i = 1; i <= pow; i++) {
        temp *= n;
    }
    return temp;
}
