#include "../inc/header.h"

char *mx_strjoin(char *s1, char const *s2) {
	if (s1 == NULL && s2 != NULL) {
		//int len = mx_strlen(s2);
		//char *res = mx_strnew(len + 1);
		char *res = mx_strdup(s2);
		return res;
	}
	if (s2 == NULL && s1 != NULL) {
		//int len = mx_strlen(s1);
		//char *res = mx_strnew(len + 1);
		char *res = mx_strdup(s1);
		return res;
	}
	if (s1 == NULL && s2 == NULL) {
		return NULL;
	}
	int len1 = mx_strlen(s1);
	int len2 = mx_strlen(s2);
	char *res = mx_strnew(len1 + len2 + 1);
	res = mx_strcat(res, s1);
	//free(s1);
	res = mx_strcat(res, s2);
	return res;
}
