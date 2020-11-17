#include "../inc/header.h"

void write_list(t_list *head, char *filename) {
	int src = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (src < 0) {
		mx_printerr("ERROR");
		exit(1);
	}
	t_list *current = head;
	while (current != NULL) {
		write(src, current->artist, mx_strlen(current->artist));
		write(src, ",", 1);
		write(src, current->song, mx_strlen(current->song));
		write(src, "\n", 1);
		current = current->next;
	}
	if (close(src) < 0) {
		mx_printerr("ERROR");
	}
}
