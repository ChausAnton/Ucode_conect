#include "list.h"

int mx_list_size(t_list *list) {
    if (list == NULL) {
        return 0;
    }
    int size = 0;
    while (list != NULL ) {
        list = list->next;
        size++;
    }
    return size;
}
