#pragma once
#ifndef HEADER
#define HEADER

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void mx_printchar(char);

void mx_printint(int);

bool mx_isdigit(int);

bool mx_isspace(char);

int mx_strcmp(const char *, const char *);

void mx_printerr(const char *);

int mx_strlen(const char *);

bool mx_isdigit(int);

bool mx_isspace(char);

int mx_atoi(const char *);

void mx_printstr(const char *);

char *mx_strcpy(char *, const char *);

void mx_strdel(char **);

char *mx_strnew(const int);

char *mx_strdup(const char *);

int mx_binary_search(int *, int, int);

void mx_intdel(int **);

int insert_number(int, char *);

int number_of_variants(const char *);

void result_output(char *[], int *, int *, int *, char *);

bool check_arg(int, char **);

void clean(int, char **);

void part_of_the_matrix(char **);

char *mx_sprintf(int);

#endif
