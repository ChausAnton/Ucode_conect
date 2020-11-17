#include "../inc/header.h"

bool cmp_str(char *s1, char *s2) {
	int len1 = mx_strlen(s1);
	int len2 = mx_strlen(s2);
	int len;
	if (len1 < len2)
		len = len1;
	else
		len = len2;
	for (int i = 0; i < len; i++) {
		char c1 = s1[i], c2 = s2[i];
		if (c1 < 97 && c1 > 32)
			c1 += 32;
		if (c2 < 97 && c2 > 32)
			c2 += 32;
		if (c1 > c2)
			return true;
		if (c1 < c2)
			return false;
	}
	return false;
}
