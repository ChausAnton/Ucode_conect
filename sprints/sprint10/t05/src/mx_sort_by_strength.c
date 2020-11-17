#include "../inc/header.h"

void mx_sort_by_strength(t_agent **agents, int count) {
    for (int i = 0; i < count-1; i++) {
        for (int i = 0; i < count-1; i++) {
            if (agents[i]->strength > agents[i+1]->strength) {
                t_agent temp;
                temp.name = mx_strdup(agents[i]->name);
                temp.power = agents[i]->power;
                temp.strength = agents[i]->strength;

                agents[i]->name = mx_strdup(agents[i+1]->name);
                agents[i]->power = agents[i+1]->power;
                agents[i]->strength = agents[i+1]->strength;

                agents[i + 1]->name = mx_strdup(temp.name);
                agents[i + 1]->power = temp.power;
                agents[i + 1]->strength = temp.strength;
                free(temp.name);
            }
        }
    }
}
