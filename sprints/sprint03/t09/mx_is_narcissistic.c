#include <stdbool.h>

double mx_pow(double, unsigned);

bool mx_is_narcissistic(int num) {
    if (num > 0) {
        double res = 0.0;
        int num2 = num;
        int i = 0; 
        while (num != 0) {
            num = num / 10;
            i++;
        }
        int num = num2;
        while (num2 != 0) {
            res += mx_pow(num2 % 10, i);
            num2 = num2 / 10;
        }
        if (num == res) {
            return true;
        }
    }
    return false;
}
