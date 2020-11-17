#include "../inc/header.h"

bool check_arg(int argc, char **argv) {
	if ((argc - 1) != 4) {
		mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
		return false;
	}

	clean(argc, argv);

	bool operand1 = true;
	bool operand2 = true;
	bool oper = true;
	bool res = true;
	char *arg;

	for (int i = 1; i < argc; i++) {
		arg = argv[i];
		for (int j = 0; arg[j] != '\0'; j++) {
			if (i == 1 && !mx_isdigit(arg[j]) && arg[j] != '?')
				operand1 = false;
			else if (i == 2 && (arg[j] != '+' && arg[j] != '-' && arg[j] != '/' && arg[j] != '*' && arg[j] != '?'))
				oper = false;
			else if (i == 3 && !mx_isdigit(arg[j]) && arg[j] != '?')
				operand2 = false;
			else if (i == 4 && !mx_isdigit(arg[j]) && arg[j] != '?')
				res = false;
		}
	}

	if (oper == false) {
		mx_printerr("invalid operation: ");
		mx_printerr(argv[2]);
		mx_printerr("\n");
		return false;
	}
	else if (operand1 == false) {
		mx_printerr("invalid operand: ");
		mx_printerr(argv[1]);
		mx_printerr("\n");
		return false;
	}
	else if (operand2 == false) {
		mx_printerr("invalid operand: ");
		mx_printerr(argv[3]);
		mx_printerr("\n");
		return false;
	}
	else if (res == false) {
		mx_printerr("invalid result: ");
		mx_printerr(argv[4]);
		mx_printerr("\n");
		return false;
	}
	else 
		return true;
}
