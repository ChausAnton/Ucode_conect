#include "../inc/header.h"

void mx_push_back(t_list **list, char *artist, char *name) {
	t_list *current = *list;
	while (current->next != NULL)
		current = current->next;
	current->next = mx_create_node(artist, name);
}
