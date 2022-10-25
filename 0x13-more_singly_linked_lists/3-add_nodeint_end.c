#include "lists.h"




/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to the pointer of the real external head of the linked list
 * @n: value of the linked list element
 * Return: pointer to the new linked list added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode, *temp;

	/*if head is null, point head to a new object*/
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	/*
	* else, create a new node, and make the last node point to it
	*/

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
		return (NULL);
	lastnode->n = n;
	lastnode->next = NULL;
	/*
	* find the last node of the list, save it as temp
	*/
	for (temp = *head; temp->next != NULL; temp = temp->next)
		;
	temp->next = lastnode;
	return (lastnode);
}
