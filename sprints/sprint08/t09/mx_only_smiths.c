#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
	if (!agents)
		return NULL;
	int size = 0;
	for (int i = 0; agents[i] != NULL; i++) {
		if (agents[i]->strength < strength && 
			!mx_strcmp(agents[i]->name, "Smith"))
			size += (6 + sizeof(int) * 2);
	}
	t_agent **res = (t_agent**)malloc(size);
	int j = 0;
	for (int i = 0; agents[i] != NULL; i++) {
		if (agents[i]->strength < strength && 
			!mx_strcmp(agents[i]->name, "Smith")) {
		res[j] = mx_create_agent("Smith", agents[i]->power,
			agents[i]->strength);
		j++;
		}
	}
	res[j] = NULL;
	mx_exterminate_agents(&agents);
	return res;
}
