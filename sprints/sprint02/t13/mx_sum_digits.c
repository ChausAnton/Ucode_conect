int mx_sum_digits(int);

int mx_sum_digits(int num) {
    int sum = 0;

    if (num < 0)
        num = num * -1;

    while(num > 0) {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}
