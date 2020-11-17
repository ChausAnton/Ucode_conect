#include "../inc/header.h"

t_list *mx_sort_list_name(t_list *list, bool (*cmp)(char *a, char *b)) {
	t_list *current = list;
	while (current->next != NULL) {
		t_list *crnt = current;
		t_list *temp = crnt->next;
		while (temp != NULL) {
			if ((*cmp)(crnt->song, temp->song)) {
				char *tmp1 = temp->artist;
				char *tmp2 = temp->song;
				temp->artist = crnt->artist;
				temp->song = crnt->song;
				crnt->artist = tmp1;
				crnt->song = tmp2;
				
			}
			temp = temp->next;
		}
		current = current->next;
	}
	return list;
}
