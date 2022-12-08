#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the linked list
 * @n: numeric value of the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}
	(*head)->prev = newnode;
	newnode->next = (*head);
	newnode->prev = NULL;
	(*head) = newnode;
	return (*head);
}
