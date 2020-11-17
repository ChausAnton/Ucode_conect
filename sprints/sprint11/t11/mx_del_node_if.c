#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, 
	bool (*cmp)(void *a, void *b)) {
	if ((*cmp)((*list)->data, del_data)) {
		t_list *head = (*list)->next;
		free(*list);
		*list = head;
	}
	t_list *head = *list;
	while (head->next != NULL) {
		t_list *current = head;
		while (current->next != NULL) {
			if ((*cmp)(current->next->data, del_data)) {
				t_list *temp_node = current->next;
				current->next = temp_node->next;
				free(temp_node);
			}
			if (current->next == NULL)
				break;
			current = current->next;
		}
		head = head->next;
	}
}
