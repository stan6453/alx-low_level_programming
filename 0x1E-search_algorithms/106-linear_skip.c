#include "search_algos.h"
skiplist_t *get_last_elem(skiplist_t *list);

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer to the first node where value is located
 *	   NULL if value is not present in head or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *trailing = list, *tmp = NULL;

	if (list == NULL)
		return (NULL);

	/*
	 *if (value < list->n)
	 *	return (NULL);
	 */

	while (list->express && list->n < value)
	{
		trailing = list;
		list = list->express;
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	}

	if (value > list->n && list->express == NULL)
	{
		tmp = get_last_elem(list);
		printf("Value found between indexes [%ld] and [%ld]\n",
			   list->index, tmp->index);
		trailing = list;
		list = tmp;
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
			   trailing->index, list->index);
	}
	while (trailing && trailing->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			   trailing->index, trailing->n);
		if (trailing->n == value)
			return (trailing);
		trailing = trailing->next;
	}
	printf("got here\n");
	return (NULL);
}

/**
 * get_last_elem - return the index of the last element in a skip list
 * @list: pointer to the head of the skip list
 * Return: index of the last element in a skip list
 *	   -1 if a not found
 */
skiplist_t *get_last_elem(skiplist_t *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}
