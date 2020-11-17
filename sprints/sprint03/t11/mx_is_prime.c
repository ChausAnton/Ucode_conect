#include <stdbool.h>

bool mx_is_prime(int num) {
    if (num > 0) {
        for (int i = 2; i < num; i++) {
            if (num % 2 == 0) {
                return false;
            }
        }
        return true;
    }
    return false;
}
