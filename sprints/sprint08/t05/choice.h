#ifndef CHOICE_H
#define CHOICE_H

#include <stdio.h>
#include <stdlib.h>

#define MX_SUCCESS_PHRASE "Follow me!"
#define MX_FAIL_PHRASE "Perhaps I was wrong about you, Neo."
#define MX_UNDEFINED_PHRASE "Are you sure about that?"

typedef char t_phrase;

char *mx_strdup(const char *str);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char* mx_strcpy(char *dst, const char *src);

#define MX_RED_PILL 0
#define MX_BLUE_PILL 1
#endif
