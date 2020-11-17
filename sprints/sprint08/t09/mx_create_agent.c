#include "only_smiths.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
	if (name == NULL)
		return NULL;
	t_agent *res = (t_agent*)malloc(mx_strlen(name) + 1 + sizeof(int) * 2);
	res->power = power;
	res->strength = strength;
	res->name = mx_strdup(name);
	return res;
}
