#include "../inc/header.h"

void mx_wc(char **str, int a) {

	for(int i = 1; i < a; i++) {
		int source  = open(str[i], O_RDONLY);
		if(source < 0){
			mx_printerr("mx_wc: ");
			mx_printerr(str[i]);
			mx_printerr(": open: No such file or directory\n");
		}
		close(source);
	}
	
	int sum_bytes = 0;
	int sum_words = 0;
	int sum_new_line = 0;

	for (int i = 1; i < a; i++) {
		int bytes = 0;
		int words = 0;
		words = mx_count_words(mx_file_to_str(str[i]));
 		char buf;
		int op = open(str[i], O_RDONLY);
		int error = 0;
    	while((error = read(op, &buf, 1))) {
       		bytes++;
			if(error < 0) {
				mx_printerr("mx_wc: ");
				mx_printerr(str[i]);
				mx_printerr(": read: Is a directory\n");
				exit(0);
			}
		}
		char *str_file = mx_file_to_str(str[i]);
		int new_line = 0;
		for (int j = 0; j < mx_strlen(str_file); j++) {
			if(str_file[j] == '\n') {
				new_line++;
			}
		}

		mx_printstr("\t");
		mx_printint(new_line);
		mx_printstr("\t");
		mx_printint(words);
		mx_printstr("\t");
		mx_printint(bytes);
		mx_printstr(" ");
		mx_printstr(str[i]);
		mx_printstr("\n");
		sum_bytes += bytes;
		sum_new_line += new_line;
		sum_words += words;
	}
	if(a > 2) {
		mx_printstr("\t");
		mx_printint(sum_new_line);
		mx_printstr("\t");
		mx_printint(sum_words);
		mx_printstr("\t");
		mx_printint(sum_bytes);
		mx_printstr(" ");
		mx_printstr("total");
		mx_printstr("\n");
	}
}
