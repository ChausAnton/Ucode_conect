#include "list.h"

void mx_pop_front(t_list **list) {
    if (list == NULL || *list == NULL) {
        return;
    }
    t_list *node = *list;
    node = node->next;
    free(*list);
    (*list) = NULL;
    *list = node;
}
