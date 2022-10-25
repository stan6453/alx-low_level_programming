#include "lists.h"




/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the first element of the linked list
 * @idx: index to insert node into
 * @n: field value of the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;


	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (temp = *head, i = 0; temp != NULL && i != idx - 1;
			temp = temp->next, i++)
		;

	if (temp == NULL)
		return (NULL);


	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
