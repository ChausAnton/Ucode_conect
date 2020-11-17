#include "list.h"

void mx_pop_back(t_list **list) {

    if (*list == NULL || list == NULL) {
        return;
    }

    t_list *node = *list;
    if (node->next == NULL) {
        free(node);
        node = NULL;
        return;
    }

    while(node->next->next != NULL) {
        node = node->next;
    }

    free(node->next);
    node->next = NULL;
}
