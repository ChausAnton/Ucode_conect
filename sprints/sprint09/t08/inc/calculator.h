#ifndef CALCULATOR_H
#define CALCULATOR_H 

#include "minilibmx.h"

int mx_add(int, int);
int mx_sub(int, int);
int mx_mul(int, int);
int mx_div(int, int);
int mx_mod(int, int);

typedef struct s_operation {
    char op;
    int (*f)(int a, int b);
}   t_operation;

enum e_operation {
    SUB,
    ADD,
    MUL,
    DIV,
    MOD
};

enum e_error {
    INCORECT_OPERAND,
    INCORECT_OPERATION,
    DIV_BY_ZERO
};

#endif
