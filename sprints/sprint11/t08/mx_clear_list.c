#include "list.h"

void mx_clear_list(t_list **list) {
    while(list != NULL) {
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
        if(node->next == NULL && node != NULL) {
            free(*list);
            *list = NULL;
        }
    }
}
