#include "../inc/header.h"

int main(int argc, char **argv) {
	if (check_arg(argc, argv)) {
		part_of_the_matrix(argv);
	}
	exit(-1);
}
