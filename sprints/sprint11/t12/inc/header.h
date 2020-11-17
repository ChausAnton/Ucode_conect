#ifndef HEADER
#define HEADER
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>

typedef struct s_list
{
	char *artist;
	char *song;
	struct s_list *next;
}              t_list;

bool mx_isspace(char);

bool mx_isdigit(char);

int mx_atoi(const char *s);

void mx_printerr(const char *s);

int mx_strcmp(const char *s1, const char *s2);

int mx_strlen(const char *s);

char *mx_strdup(const char *str);

char* mx_strcpy(char *dst, const char *src);

char *mx_strnew(const int size);

t_list *mx_create_node(const char *artist, const char *name);

int mx_list_size(t_list *list);

void mx_pop_back(t_list **list);

void mx_pop_front(t_list **list);

void mx_pop_index(t_list **list, int index);

void mx_push_back(t_list **list, char *artist, char *name);

void mx_push_front(t_list **list, char *artist, char *name);

t_list *mx_sort_list_artist(t_list *list, bool (*cmp)(char *a, char *b));

t_list *fill_list(const char *filename);

char *mx_strjoin(char *s1, char const *s2);

char *mx_strcat(char *s1, const char *s2);

void print_list(t_list *head);

void mx_printstr(const char *s);

void mx_printint(int n);

void mx_printchar(char c);

void mx_clear_list(t_list **list);

bool cmp_str(char *s1, char *s2);

void write_list(t_list *head, char *filename);

t_list *mx_sort_list_name(t_list *list, bool (*cmp)(char *a, char *b));

#endif
