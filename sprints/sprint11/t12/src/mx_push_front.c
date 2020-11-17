#include "../inc/header.h"

void mx_push_front(t_list **list, char *artist, char *name) {
	t_list *newNode = mx_create_node(artist, name);
	newNode->next = *list;
	*list = newNode;
}
