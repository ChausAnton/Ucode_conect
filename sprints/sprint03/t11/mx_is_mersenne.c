#include <stdbool.h>

bool mx_is_prime(int);

double mx_pow(double, unsigned);

bool mx_is_mersenne(int n) {
    if (mx_is_prime(n)) {
        for (int i = 1; i <= n; i++) {
            if ((mx_pow(2, i) - 1) == n) {
                return true;
            }
        }
        return false;
    }
    return false;
}
