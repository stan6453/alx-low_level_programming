#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: head of the linked list
 * @index: index to search for
 * Return: address of the node at the perticular index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && count != index)
	{
		head = head->next;
		count++;
	}
	if (!head)
		return (NULL);
	return (head);
}
