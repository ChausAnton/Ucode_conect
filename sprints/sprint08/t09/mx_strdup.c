#include "only_smiths.h"

char *mx_strdup(const char *str) {
	int len = mx_strlen(str);
	char *cpy = mx_strnew(len);
	return mx_strcpy(cpy, str);
}
