#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
    int res = 0;
    int sign = 1;
    int i = 0;
    while (mx_isspace(str[i]) == true) i++;
    if (str[i] == '-' || str[i] == '+') {
        sign = 1 - 2 * (str[i++] == '-');
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res = 10 * res + (str[i++] - '0'); 
    }
    return res * sign;
}
