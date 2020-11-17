#pragma once
#ifndef HEADER
#define HEADER

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int mx_strlen(const char *);

void mx_printerr(const char *);

void read_file(char *[]);

int main(int, char *[]);

void mx_printstr(const char *);

void mx_printchar(char);


#endif
