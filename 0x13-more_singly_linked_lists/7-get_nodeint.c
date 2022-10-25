#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first element of the linked list
 * @index: index of the element to return
 * Return: pointer to the element if index exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i != index)
	{
		head = head->next;
		i++;
	}

	if (head)
		return (head);
	else
		return (NULL);
}
