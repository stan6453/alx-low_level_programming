#include "lists.h"

int _str_len(const char *str);

/**
 * add_node_end - add a new node to the end of the linked list
 * @head: the head of the linked list
 * @str: string filed of the structure
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode;
	list_t *temp;

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
		 * create a new node, and make the last node point to it
		 */
		lastnode = malloc(sizeof(list_t));
		if (lastnode == NULL)
			return (NULL);
		lastnode->str = strdup(str);
		lastnode->len = _str_len(str);
		lastnode->next = NULL;
		/*
		 * find the last node, save it as temp
		 */
		for (temp = *head; temp->next != NULL; temp = temp->next)
			;
		/*
		 * attach lastnode to the end
		 */
		temp->next = lastnode;
	}

	return (lastnode);
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
