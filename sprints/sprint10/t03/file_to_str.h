#pragma once
#ifndef HEADER
#define HEADER
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>

char *mx_strcat(char *, const char *);

char *mx_strcpy(char *, const char *);

void mx_printstr(const char *);

int mx_strlen(const char *);

char *mx_strnew(const int);

char *mx_strjoin(char const *, char const *);

char *mx_file_to_str(const char *);

#endif
