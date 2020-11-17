#include "../inc/header.h"

int main(int argc, char *argv[]) {
	if (argc >= 2) {
		for (int i = 1; i < argc; i++) {
			int src = open(argv[i], O_RDONLY);
			if (src == -1) {
				mx_printerr("mx_cat: ");
        		mx_printerr(argv[i]);
        		mx_printerr(": No such file or directory\n");
        		exit(1);
			}
			int i = 1;
			char *res = NULL;
    		char buffer[1];
    		int bytes_read = 1;
    		while(bytes_read != 0) {
        		bytes_read = read(src, buffer, 1);
        		if(bytes_read == 0) continue;
        		char a = buffer[0];
        		res = mx_strjoin(res, &a);
        		res[i] = '\0';
        		i++;
    		}
			mx_printstr(res);
			//mx_printstr("\n");
			if (close(src) < 0) {
				mx_printerr("mx_cat: ");
        		mx_printerr(argv[i]);
        		mx_printerr(": No such file or directory\n");
        		exit(1);
        	}
		}
	}
	else {
		int i = 1;
		char *res = NULL;
    	char buffer[1];
    	while(read(0, buffer, 1) > 0 && buffer[0] != '\n') {
        	char a = buffer[0];
        	res = mx_strjoin(res, &a);
        	res[i] = '\0';
        	i++;
    	}
		mx_printstr(res);
		mx_printstr("\n");

	}
	exit(0);
}

