#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print the  content of a linked list
 * @h: the head of the linked list
 * Return: length of linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
		h = h->next;
	}
	return (count);
}
