#include "../inc/header.h"

char *mx_file_to_str(const char *filename) {
    int src = open(filename, O_RDONLY);
	if (src == -1)
		return NULL;
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

	if (close(src) < 0)
		return NULL;
        
	return res;
}
