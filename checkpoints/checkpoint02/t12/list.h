#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

void mx_clear_list(t_list **list);

#endif
