#pragma once
#ifndef HEADER
#define HEADER

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}   t_list;

void mx_foreach_list(t_list *list, void (*f)(t_list *node));

#endif
