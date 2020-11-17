#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char);

bool mx_isdigit(int);

int mx_atoi(const char *str) {
    int i = 0;
    int res = 0;
    bool first_space = true;
    bool minus = false;
    while (str[i] != '\0') {
        if ((first_space == true && str[i] == '-') || (i == 0 && str[i] == '-'))
            minus = true;

        if ((mx_isspace(str[i]) == 1 && first_space == true) || (i == 0 && minus == true)) {
            i++;
            continue;
        }
        else if (mx_isdigit(str[i]) == 1) {
            res = res * 10 + str[i] - '0';
            first_space = false;
        }
        else {
            if (minus == true)
                return res * -1;
            return res;
        }
        i++;
    }
    if (minus == true)
        return res * -1;
    return res;
}
