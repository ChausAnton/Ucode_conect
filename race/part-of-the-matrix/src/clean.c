#include "../inc/header.h"

void clean(int argc, char **argv) {
	char *arg;
	char **clean = argv;
	for (int i = 1; i < argc; i++){

		int b = 0;
		arg = argv[i];

		for (int j = 0; arg[j] != '\0'; j++) {
			if (!(mx_isspace(arg[j]))) {
				clean[i][b] = arg[j];
				b++;
			}
		}

		clean[i][b] = '\0';
	}
	argv = clean;
}
