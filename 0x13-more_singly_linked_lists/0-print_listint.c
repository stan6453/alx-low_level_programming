#include "lists.h"


/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	for (n = 0; h ; n++, h = h->next)
		printf("%d\n", h->n);
	return (n);
}
