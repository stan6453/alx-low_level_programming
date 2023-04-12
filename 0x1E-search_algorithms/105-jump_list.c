#include "search_algos.h"
listint_t *get_item(listint_t *list, size_t index);

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located
 *	   NULL if value is not present in head or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index = 0, jump = sqrt(size);

	if (list == NULL)
		return (NULL);

	while (get_item(list, index)->n < value && index < size)
	{
		index = index + jump;
		if (index >= size)
			break;
		printf("Value checked at index [%ld] = [%d]\n", index,
			   get_item(list, index)->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   index - jump, index >= size ? size - 1 : index);

	for (index = index - jump; index < size; index++)
	{
		printf("Value checked at index [%ld] = [%d]\n", index,
			   get_item(list, index)->n);
		if (get_item(list, index)->n == value)
			return (get_item(list, index));
	}
	return (NULL);
}

/**
 * get_item - returns an element in list at a given index
 * @list: pointer to the head of the list to search in
 * @index: index of element to return
 * Return: pointer to the element at index `index`
 *	   NULL if head is NULL, or index does not exist.
 */
listint_t *get_item(listint_t *list, size_t index)
{
	size_t i = 0;

	if (list == NULL)
		return (NULL);

	while (list->next && i < index)
	{
		list = list->next;
		i++;
	}

	if (i != index)
		return (NULL);
	return (list);
}
