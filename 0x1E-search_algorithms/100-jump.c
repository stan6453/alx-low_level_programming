#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0, index = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);

	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	while (array[index] < value && index < size)
	{	
		index = index + jump;
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index == 0 ? 0 : index - jump, index);

	for (index = index == 0 ? index : index - jump; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
