#include "../inc/header.h"

t_list *fill_list(const char *filename) {
	t_list *head = NULL;
	t_list *temp = head;
	int src = open(filename, O_RDONLY);
	if (src < 0) {
		mx_printerr("ERROR");
		exit(1);
	}
	char *c = (char*)malloc(1);
	char *artist = NULL, *name = NULL;
	int comaCount = 0;
	while (read(src, c, 1) > 0) {
		if (!comaCount && mx_strcmp(c, ",")) {
			artist = mx_strjoin(artist, c);
			continue;
		}
		if (!mx_strcmp(c, ",")) {
			comaCount++;
			continue;
		}
		if (comaCount && mx_strcmp(c, "\n")) {
			name = mx_strjoin(name, c);
			continue;
		}
		if (!mx_strcmp(c, "\n") && artist != NULL) {
			comaCount = 0;
			if (head == NULL) {
				head = mx_create_node(artist, name);
				temp = head;
			}
			else {
				temp->next = mx_create_node(artist, name);
				temp = temp->next;
			}
			free(artist);
			free(name);
			artist = NULL;
			name = NULL;
		}
	}
	free(c);
	if (close(src) < 0) {
        	mx_printerr("ERROR");
        	exit(1);
    }
    return head;
}
