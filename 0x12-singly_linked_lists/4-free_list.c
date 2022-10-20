
#include "lists.h"


/**
 * free_list - free all memory allocated for the linked list
 * @head: the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *nextnode;

	for (temp = head; temp != NULL; temp = nextnode)
	{
		free(temp->str);
		nextnode = temp->next;
		free(temp);
	}
}
