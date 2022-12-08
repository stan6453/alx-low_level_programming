#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: head of the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempnode = *head;
	unsigned int count = 0;

	if (!(*head))
		return (-1);
	while (tempnode && count != index)
	{
		tempnode = tempnode->next;
		count++;
	}
	if (!tempnode)
		return (-1);
	if (tempnode->next)
		tempnode->next->prev = tempnode->prev;
	if (tempnode->prev)
		tempnode->prev->next = tempnode->next;
	if (tempnode == *head)
		*head = tempnode->next;
	free(tempnode);
	return (1);
}
