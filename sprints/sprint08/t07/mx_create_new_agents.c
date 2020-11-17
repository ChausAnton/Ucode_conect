#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    if(!name || !power || !strength) return NULL;
    int size = 0;

    for (int i = 0; i < count; i++)
        size += (mx_strlen(name[i]) + 1 + sizeof(int) * 2);
    t_agent **res = (t_agent**)malloc(size);

    for (int i = 0; i < count; i++) {
        res[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    res[count] = NULL;
    return res;
}

