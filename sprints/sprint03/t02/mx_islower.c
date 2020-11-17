#include <stdbool.h>

bool mx_islower(int c) {
    if (97 <= c && c <= 122) {
        return 1;
    }
    return 0;
}
