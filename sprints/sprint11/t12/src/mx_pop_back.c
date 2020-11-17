#include "../inc/header.h"

void mx_pop_back(t_list **list) {
	t_list *current = *list;
	while (current->next->next != NULL)
		current = current->next;
	free(current->next->song);
	free(current->next->artist);
	free(current->next);
	current->next = NULL;
}
