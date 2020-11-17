#include "../inc/header.h"

int number_of_variants(const char *arg) {
	int number_of_question = 0;
	for (int i = 0; arg[i] != '\0'; i++) {
		if (arg[i] == '?')
			number_of_question++;
	}
	char *number = mx_strnew(number_of_question);
	for (int i = 0; i < number_of_question; i++) {
		number[i] = '9';
	}
	int answer = mx_atoi(number);
	mx_strdel(&number);
	return answer;
	
}
