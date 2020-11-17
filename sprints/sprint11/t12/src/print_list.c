#include "../inc/header.h"

void print_list(t_list *head) {
	int index = 0;
	t_list *current = head;
	while (current != NULL) {
		mx_printint(index);
		mx_printstr(". ");
		mx_printstr(current->artist);
		mx_printstr(" - ");
		mx_printstr(current->song);
		mx_printchar('\n');
		current = current->next;
		index++;
	}
}
