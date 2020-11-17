#include "../inc/header.h"

void mx_clear_list(t_list **list) {
	t_list *current = *list;
	while (current->next != NULL) {
		t_list *temp = current->next;
		free(current->artist);
		free(current->song);
		free(current);
		current = temp;
	}
	free(current->artist);
	free(current->song);
	free(current);
	list = NULL;
}
