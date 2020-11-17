#pragma once
#ifndef HEADER
#define HEADER
#include <stdbool.h>

int mx_atoi(const char *);

bool mx_isdigit(int);

bool mx_isspace(char);

void mx_printchar(char);

void mx_printint(int);

void mx_printstr(const char *);

int mx_strcmp(const char *, const char *, int);

char *mx_strncpy(char *, const char *, int);

int mx_strlen(const char *);

#endif
