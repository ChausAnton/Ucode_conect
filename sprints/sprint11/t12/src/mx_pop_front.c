#include "../inc/header.h"

void mx_pop_front(t_list **list) {
	t_list *head = (*list)->next;
	free((*list)->song);
	free((*list)->artist);
	free(*list);
	*list = head;
}
