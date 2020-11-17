#pragma once
#ifndef HEADER
#define HEADER
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

char *mx_strnew(const int);

char *mx_strcat(char *, const char *);

char *mx_strjoin(char const *, char const *);

void mx_printerr(const char *);

void mx_printchar(char);

int mx_strlen(const char *);

void mx_printstr(const char *);

#endif
