#include "../inc/header.h"

int insert_number(int number, char *arg) {
	char *answer = mx_strdup(arg);
	int length = mx_strlen(answer);
	
	int length_number = 0;
	char *str = mx_sprintf(number);
	for (int i = 0; str[i] != '\0'; i++) {
		length_number++;
	}
	for (int i = length_number - 1; i >= 0; i--) {
		for (int j = length - 1; j >= 0; j--) {
			if (answer[j] == '?') {
				answer[j] = str[i];
				break;
			}
		}
	}
	for(int i = 0; i < length_number; i++) {
		if (answer[i] == '?') {
			answer[i] = '0';
		}
	}
    int res = mx_atoi(answer);
    mx_strdel(&answer);
    mx_strdel(&str);
	return res;
}
