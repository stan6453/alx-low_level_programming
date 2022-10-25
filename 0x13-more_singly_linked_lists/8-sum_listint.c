#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
