#include "lists.h"


int _str_len(const char *str);


/**
 * add_node - add a new node to the head of the linked list
 * @head: the head of the linked list
 * @str: string filed of the structure
 * Return: the pointer to the new head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	if (*head == NULL)
	{
		/*
		 * make head pointer to the first structure
		 */
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = _str_len(str);
		(*head)->next = NULL;
		return (*head);
	}
	else
	{
		/*
		 * create a new head, and make its next field point to the main head
		 */
		newhead = malloc(sizeof(list_t));
		if (newhead == NULL)
			return (NULL);
		newhead->str = strdup(str);
		newhead->len = _str_len(str);
		newhead->next = *head;
		/*
		 * set the new head as the main head
		 */
		*head = newhead;
	}

	return (newhead);
}



/**
 * _str_len - finds length of a string
 * @str: string to find its length
 * Description: finds length of a string (not including null character)
 * Return: length of string
 */
int _str_len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
