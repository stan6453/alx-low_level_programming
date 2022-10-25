#include "lists.h"






/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	/*
	 * if list is empty, return 0
	 */
	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);


}
