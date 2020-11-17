#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if(index <= 0) {
        mx_push_front(list, data);
        return;
    }
    t_list *node = *list;
    int size = 0;
    while (node != NULL) {
        node = node->next;
        size++;
    }
    if(size <= index) {
        mx_push_back(list, data);
        return;
    }
    t_list *node_mv = *list;
    for (int i = 0; i < index-1; i++) {
        node_mv = node_mv->next;
    }
    t_list *node_tmp = mx_create_node(data);
    node_tmp->next = node_mv->next;
    node_mv->next = node_tmp;
}
