#include "lists.h"


/**
 * list_len - return the lenth of a linked list
 * @h: the head of the linked list
 * Return: length of linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int count = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		count++;
	}
	return (count);
}
