#ifndef _STAN_LIST
#define _STAN_LIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct object{
	char *str;
	int len;
	struct object *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);










#endif
