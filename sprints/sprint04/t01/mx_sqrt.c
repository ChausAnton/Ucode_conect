int mx_sqrt(int x) {
    int sqrt = -1;
    int temp = x / 2;
    while (1 == 1) {
        if (temp * temp > x) {
            temp = temp / 2;
        }
        else if (temp * temp <= x) {
            break;
        }
        else if (temp * temp == x) {
            return temp;
        }
    }
    for (int i = temp; i <= x / 2; i++) {
        if (i * i == x) {
            sqrt = i;
            break;
        }
    }
    if (sqrt == -1) {
        return 0;
    }
    return sqrt;
}
