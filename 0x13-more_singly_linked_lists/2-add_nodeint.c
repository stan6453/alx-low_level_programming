#include "lists.h"



/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to the pointer of the real external head of the linked list
 * @n: value of the linked list element
 * Return: pointer to the new linked list added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	/*if the head is null, create the head*/
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	/*else, create a new node, making it the new head*/
	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
