#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if(argc == 1) {
        int bytes = 0;
        char *res = "s";
        char buffer[1];
        int new_line = 0;
        while(read(0, buffer, 1) != 0) {
            char a = buffer[0];
            if(a == '\n') new_line++;
            res = mx_strjoin(res, &a);
            bytes++;
        }
        char *str = mx_strdup(res);
		int words = mx_count_words(str);
		mx_printstr("\t");
		mx_printint(new_line);
		mx_printstr("\t");
		mx_printint(words - 1);
		mx_printstr("\t");
		mx_printint(bytes);
		mx_printstr("\n");
		return 0;
    }

    if(argc < 2) {
        return 0;
    }

    mx_wc(argv, argc);
}
