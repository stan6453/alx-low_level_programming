#include "search_algos.h"
/**
 * linear_search - searches for a value in a sorted array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	while (array[index] != value)
	{
		index++;
		if (index == size)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	return (index);
}
