#include "../inc/header.h"

t_list *mx_create_node(const char *artist, const char *name) {
	t_list *res = (t_list*)malloc(16);
	res->artist = mx_strdup(artist);
	res->song = mx_strdup(name);
	res->next = NULL;
	return res;
}
