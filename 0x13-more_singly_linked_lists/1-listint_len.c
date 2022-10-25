#include "lists.h"


/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h; n++, h = h->next)
		;
	return (n);
}
