#pragma once
#ifndef SMITHS
#define SMITHS
#include <stdlib.h>
#include "agent.h"

void mx_exterminate_agents(t_agent ***agents);

t_agent *mx_create_agent(char *name, int power, int strength);

char *mx_strdup(const char *str);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char* mx_strcpy(char *dst, const char *src);

int mx_strcmp (const char *s1, const char *s2);

t_agent **mx_only_smiths(t_agent **agents, int strength);

#endif
