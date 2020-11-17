#include <stdbool.h>

bool mx_isspace(char);

bool mx_isspace(char c) {
    if (c == ' ' || c == '\n' || c == '\t') {
        return true;
    }
    else if (c == '\v' || c == '\f' || c == '\r') {
        return true;
    }

    return false;
}
