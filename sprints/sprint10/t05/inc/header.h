#pragma once
#ifndef HEADER
#define HEADER
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct s_agent {
    char *name;
    int power;
    int strength;
}   t_agent;

void mx_sort_by_strength(t_agent **, int);

void mx_sort_by_power(t_agent **, int);

void mx_sort_by_name(t_agent **, int);

int mx_strcmp(const char *, const char *);

bool mx_isdigit(int);

char  *mx_take_info(const char *);

char *mx_strcat(char *, const char *);

char *mx_strcpy(char *, const char *);

void mx_printstr(const char *);

int mx_strlen(const char *);

char *mx_strnew(const int);

char *mx_strjoin(char const *, char const *);

char *mx_file_to_str(const char *);

int mx_count_words(char *);

bool mx_isspace(char);

void mx_printint(int);

void mx_printerr(const char *);

void mx_printchar(char);

char *mx_strdup(const char *);

char *mx_strstr(const char *, const char *);

char *mx_strchr(const char *, int);

char *mx_strncpy(char *, const char *, int);

t_agent **mx_create_new_agents(char **, int *, int *, int);

t_agent *mx_create_agent(char *, int, int);

int mx_atoi(const char *);

char *take_info(char *);


#endif
