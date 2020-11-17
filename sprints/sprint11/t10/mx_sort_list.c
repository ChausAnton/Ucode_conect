#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
	t_list *current = list;
	while (current->next != NULL) {
		t_list *crnt = current;
		t_list *temp = crnt->next;
		while (temp != NULL) {
			if ((*cmp)(crnt->data, temp->data)) {
				void *tmp = temp->data;
				temp->data = crnt->data;
				crnt->data = tmp;
				
			}
			temp = temp->next;
		}
		current = current->next;
	}
	return list;
}
