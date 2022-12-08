#include "lists.h"

/**
 * add_dnodeint_end -   adds a new node at the end of a dlistint_t list.
 * @head: head of the linked list
 * @n: numeric value of the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *tempnode = *head;

	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}
	while (tempnode->next)
		tempnode = tempnode->next;
	tempnode->next = newnode;
	newnode->prev = tempnode;
	newnode->next = NULL;
	return (newnode);
}
