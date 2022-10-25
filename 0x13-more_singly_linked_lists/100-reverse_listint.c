#include "lists.h"



/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the pointer to the first element of the linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rlist, *temp;

	if ((*head) == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	/*reverse list*/
	temp = (*head)->next;
	rlist = temp;
	(*head)->next = NULL;

	while (temp->next)
	{
		temp = temp->next;
		rlist->next = *head;
		*head = rlist;
		rlist = temp;
	}
	rlist->next = *head;
	*head = rlist;
	return (*head);
}
