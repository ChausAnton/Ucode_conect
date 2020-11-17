#include "../inc/header.h"

void mx_intdel(int **digit) {
    free(*digit);
    *digit = NULL;
}
