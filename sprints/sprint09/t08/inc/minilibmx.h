#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int mx_atoi(const char *);

bool mx_isdigit(int);

bool mx_isspace(char);

void mx_printchar(char);

void mx_printint(int);

void mx_printstr(const char *);

int mx_strcmp(const char *, const char *);

char *mx_strcpy(char *, const char *);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char *mx_strdup(const char *str);

#endif
