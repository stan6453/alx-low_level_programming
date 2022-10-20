#ifndef _STAN_LIST
#define _STAN_LIST

#include <stdio.h>

typedef struct object{
	char *str;
	int len;
	struct object *next;
} list_t;
size_t print_list(const list_t *h);

#endif
