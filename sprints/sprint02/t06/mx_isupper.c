#include <stdbool.h>

bool mx_isupper(int c) {
    if (65 <= c && c <= 90) {
        return 1;
    }

    return 0;
}
