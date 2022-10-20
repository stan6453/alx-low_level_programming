#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *temp;
	int count = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
	}
	return (count);
}
