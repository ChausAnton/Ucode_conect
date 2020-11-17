#include "../inc/header.h"

void mx_pop_index(t_list **list, int index) {
	if (index <= 0) {
		mx_pop_front(list);
		return;
	}
	if (index >= mx_list_size(*list)) {
		mx_pop_back(list);
		return;
	}
	t_list *current = *list;
	t_list *temp_node = NULL;
	for (int i = 0; i < index - 1; i++)
		current = current->next;
	temp_node = current->next;
	current->next = temp_node->next;
	free(temp_node->song);
	free(temp_node->artist);
	free(temp_node);
}
