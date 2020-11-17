#pragma once
#ifndef HEADER
#define HEADER

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "agent.h"

t_agent **mx_create_new_agents(char **, int *, int *, int);

t_agent *mx_create_agent(char *, int, int);

char *mx_strcpy(char *, const char *);

int mx_strlen(const char *);

char *mx_strnew(const int);

char *mx_strdup(const char *);

#endif
