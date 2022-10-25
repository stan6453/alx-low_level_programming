#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to the pointer to the first element of the linked list
 * @index: index to delete node from
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}

	for (temp = *head, i = 0; temp != NULL && i != index - 1; temp = temp->next, i++)
		;

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
	{
		temp2 = temp->next;
		temp->next = temp->next->next;
		free(temp2);
		return (1);
	}
	return (-1);
}
