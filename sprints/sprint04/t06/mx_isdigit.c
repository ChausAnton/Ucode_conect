#include <stdbool.h>

bool mx_isdigit(int);

bool mx_isdigit(int c) {
    if (48 <= c && c <= 57) {
        return true;
    }

    return false;
}
