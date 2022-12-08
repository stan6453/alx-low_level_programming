#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list..
 * @head: head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
}
