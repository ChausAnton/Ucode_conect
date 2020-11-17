#include <stdbool.h>

bool mx_isdigit(int c) {
    if(c >= 48 && c <= 57) return true;
    return false;
}

bool mx_isspace(char c) {
	if(c == 32 || (c >= 9 && c <= 13)) return 1;
	else return 0;
}

int mx_atoi(const char *str) {
    int res = 0;
    int count = 0;
    int flag = 1;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (mx_isdigit(str[i])) {
            res *= 10;
            res += str[i] - 48;
        }

        else if (str[i] == '-' && flag != -1) {
            flag = -1;
            ++count;
        }
        
        else if (str[i] == '+' && count < 1) ++count;

        else if((!mx_isdigit(str[i]) && !mx_isspace(str[i])) || count > 1) return res * flag;
    }
    return res * flag;
}
