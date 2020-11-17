#include "list.h"

void mx_clear_list(t_list **list) {
    if(list == NULL || *list == NULL) return;
    t_list *next = (*list)->next;
    free(*list);
    *list = NULL;
    while (next) {
        *list = next;
        next = next->next;
        free(*list);
        *list = NULL;
    }
    return;
}
