#include "../inc/header.h"

void result_output(char *argv[], int *operand1, int *operand2, int *result, char *oper) {
	int length_operand1 = number_of_variants(argv[1]);
	int length_operand2 = number_of_variants(argv[3]);
	int length_res = number_of_variants(argv[4]);

	for (int n = 0; oper[n] != '\0'; n++) {
		for (int i = 0; i <= length_operand1 ; i++) {
			for (int j = 0; j <= length_operand2 ; j++) {
				for (int z = 0; z <= length_res; z++) {
					switch (oper[n]) {
					case '+':
						if(operand1[i] + operand2[j] == result[z]){
							mx_printint(operand1[i]);
							mx_printstr(" + ");
							mx_printint(operand2[j]);
							mx_printstr(" = ");
							mx_printint(result[z]);
							mx_printchar('\n');
						}
						break;
					case '-':
						if(operand1[i] - operand2[j] == result[z]){
							mx_printint(operand1[i]);
							mx_printstr(" - ");
							mx_printint(operand2[j]);
							mx_printstr(" = ");
							mx_printint(result[z]);
							mx_printchar('\n');
						}
						break;
					case '*':
						if(operand1[i] * operand2[j] == result[z]){
							mx_printint(operand1[i]);
							mx_printstr(" * ");
							mx_printint(operand2[j]);
							mx_printstr(" = ");
							mx_printint(result[z]);
							mx_printchar('\n');
						}
						break;
					case '/':
                        if(operand2[j] == 0) break;
						if((int)(operand1[i] / operand2[j]) == result[z]){
							mx_printint(operand1[i]);
							mx_printstr(" / ");
							mx_printint(operand2[j]);
							mx_printstr(" = ");
							mx_printint(result[z]);
							mx_printchar('\n');
						}
						break;
					default:
						break;
					}
				}
			}
		}
	}
}
