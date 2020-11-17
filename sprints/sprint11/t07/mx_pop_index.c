#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if(*list == NULL) return;

    if(index <= 0) {
        mx_pop_front(list);
        return;
    }
    t_list *node = *list;
    int size = 0;
    while (node != NULL) {
        node = node->next;
        size++;
    }
    if(size <= index) {
        mx_pop_back(list);
        return;
    }
    
    t_list *node_mv = (*list);
    for(int i = 0; node_mv != NULL && i < index - 1; i++) {
        node_mv = node_mv->next;
    }
    if(node_mv == NULL || node_mv->next == NULL) return;

    t_list *temp = node_mv->next->next;
    free(node_mv->next);
    node_mv->next = temp;
}
