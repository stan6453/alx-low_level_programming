#include "lists.h"

/**
 * print_listint_safe - that prints a listint_t linked list (not including the loop if any)
 * @head: pointer to the first element of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t n;


	if (head == NULL)
		exit(98);


	n = 0;
	temp = head;
	do
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	while (temp && temp != head->next->next);
	return (n);
}
