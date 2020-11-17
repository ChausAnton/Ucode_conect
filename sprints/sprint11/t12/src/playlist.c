#include "../inc/header.h"

int main(int argc, char *argv[]) {
	if (argc < 3) {
		mx_printerr("usage: ./playlist [file] [command] [args]");
		exit(1);
	}
	if (mx_strcmp(argv[2], "add") && mx_strcmp(argv[2], "remove") 
		&& mx_strcmp(argv[2], "sort") && mx_strcmp(argv[2], "print")) {
		mx_printerr("ERROR");
		exit(1);
	}
	if (!mx_strcmp(argv[2], "add")) {
		if (argc > 5 || argv[3] == NULL) {
			mx_printerr("ERROR");
			exit(1);
		}
		t_list *head = fill_list(argv[1]);
		mx_push_back(&head, argv[3], argv[4]);
		write_list(head, argv[1]);
		mx_clear_list(&head);
	}
	if (!mx_strcmp(argv[2], "remove")) {
		if (argc < 3 || argc > 4) {
			mx_printerr("ERROR");
			exit(1);
		}
		if (mx_atoi(argv[3]) == 0 && mx_strcmp(argv[3], "0")) {
			mx_printerr("ERROR");
			exit(1);
		}
		t_list *head = fill_list(argv[1]);
		mx_pop_index(&head, mx_atoi(argv[3]));
		write_list(head, argv[1]);
		mx_clear_list(&head);
	}
	if (!mx_strcmp(argv[2], "print")) {
		if (argc > 3) {
			mx_printerr("ERROR");
			exit(1);
		}
		t_list *head = fill_list(argv[1]);
		print_list(head);
		mx_clear_list(&head);
		exit(0);
	}
	if (!mx_strcmp(argv[2], "sort")) {
		if (argc > 4) {
			mx_printerr("ERROR");
			exit(1);
		}
		if (mx_strcmp(argv[3], "artist") 
			&& mx_strcmp(argv[3], "name")) {
			mx_printerr("ERROR");
			exit(1);
		}
		if (!mx_strcmp(argv[3], "artist")) {
			t_list *head = fill_list(argv[1]);
			head = mx_sort_list_artist(head, cmp_str);
			write_list(head, argv[1]);
			mx_clear_list(&head);
		}
		if (!mx_strcmp(argv[3], "name")) {
			t_list *head = fill_list(argv[1]);
			head = mx_sort_list_name(head, cmp_str);
			write_list(head, argv[1]);
			mx_clear_list(&head);
		}
	}
	return 0;
}
