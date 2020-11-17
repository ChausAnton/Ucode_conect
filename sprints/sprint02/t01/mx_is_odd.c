#include <stdbool.h>

bool mx_is_odd(int);

bool mx_is_odd(int c) {
    if (c % 2 == 0) {
        return false;
    }

    return true;
}
