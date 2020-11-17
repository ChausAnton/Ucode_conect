#include "../inc/header.h"

int mx_list_size(t_list *list) {
	int count = 1;
	t_list *current = list;
	while (current->next != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

