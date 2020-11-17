#include "../inc/header.h"

void part_of_the_matrix(char **argv) {

	char *arg = mx_strnew(mx_strlen(argv[1]));
	int *operand1 = (int *) malloc(sizeof(int) * (number_of_variants(argv[1]) + 1));
	if(operand1 == NULL) exit(-1);
	for (int i = 0; i <= number_of_variants(argv[1]) + 1; i++) {
		arg = mx_strcpy(arg, argv[1]);
		operand1[i] = insert_number(i , arg);
	}
	mx_strdel(&arg);

	arg = mx_strnew(mx_strlen(argv[3]));
	int *operand2 = (int *) malloc(sizeof(int) * (number_of_variants(argv[3]) + 1));
	if(operand2 == NULL) exit(-1);
	for (int i = 0; i <= number_of_variants(argv[3]) + 1; i++) {
		arg = mx_strcpy(arg, argv[3]);
		operand2[i] = insert_number(i , arg);
	}
	mx_strdel(&arg);

	arg = mx_strnew(mx_strlen(argv[4]));
	int *result = (int *) malloc(sizeof(int) * (number_of_variants(argv[4]) + 1));
	if(result == NULL) exit(-1);
	for (int i = 0; i <= number_of_variants(argv[4]) + 1; i++) {
		arg = mx_strcpy(arg, argv[4]);
		result[i] = insert_number(i , arg);
	}
	mx_strdel(&arg);


	char *oper = mx_strnew(mx_strlen(argv[2]));
	if(oper == NULL) exit(-1);
 	oper = mx_strcpy(oper, argv[2]);
 	if (mx_strcmp(oper, "?") == 0) {
		mx_strdel(&oper);
		oper = mx_strnew(mx_strlen("+-*/"));
		if(oper == NULL) exit(-1);
  		oper = mx_strcpy(oper, "+-*/");
 	} 

 	result_output(argv, operand1, operand2, result, oper);

	mx_intdel(&operand1);
	mx_intdel(&operand2);
	mx_intdel(&result);
	mx_strdel(&oper);

}
