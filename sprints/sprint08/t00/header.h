#pragma once
#ifndef HEADER
#define HEADER
#include <stdbool.h>

int mx_atoi(const char *);

int mx_factorial_iter(int);

int mx_gcd(int, int);

bool mx_isdigit(int);

bool mx_isspace(char);

int mx_lcm(int, int);

int mx_popular_int(const int *, int);

double mx_pow_rec(double, unsigned int);

void mx_printchar(char);

void mx_printint(int);

void mx_printstr(const char *);

int mx_sqrt(int);

char *mx_strcat(char *, const char *);

char *mx_strchr(const char *, int);

int mx_strcmp(const char *, const char *, int);

char *mx_strncpy(char *, const char *, int);

int mx_strlen(const char *);

#endif
