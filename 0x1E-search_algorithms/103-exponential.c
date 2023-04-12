#include "search_algos.h"
int binary_search_helper(int *array, size_t size,
						 int value, size_t index_offset);
int exponential_search_helper(int *array, size_t low,
							  size_t high, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	return (exponential_search_helper(array, 1, size - 1, value));
}

/**
 * exponential_search_helper - searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: index of the left-hand-side pointer
 * @high: index of the right-hand-side-pointer
 * @value: value to search for
 * Return: index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int exponential_search_helper(int *array, size_t low, size_t high, int value)
{
	if (array == NULL)
		return (-1);

	if (low > high)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", low / 2, high);
		return (binary_search_helper(array + (low / 2),
									 (high - (low / 2)) + 1, value, low / 2));
	}
	if (array[low] > value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", low / 2, low);
		return (binary_search_helper(array + (low / 2),
									 (low - (low / 2)) + 1, value, low / 2));
	}

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);

	if (array[low] == value)
	{
		return (low);
	}

	return (exponential_search_helper(array, low * 2, high, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * @index_offset: offset of first element
 * of the subarray from index 0 of the whole array
 * Return: index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int binary_search_helper(int *array, size_t size,
						 int value, size_t index_offset)
{
	size_t mid_index;
	size_t new_size;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	printarray(array, size);

	mid_index = (size - 1) / 2;
	if (array[mid_index] == value)
	{
		return (mid_index + index_offset);
	}
	else if (size == 1)
	{
		return (-1);
	}
	else if (array[mid_index] < value)
	{
		new_size = (size % 2) == 0 ? size / 2 : size / 2;
		return (binary_search_helper((array + mid_index + 1),
									 new_size, value, index_offset + mid_index + 1));
	}
	else
	{
		new_size = (size % 2) == 0 ? ((size / 2) - 1) : size / 2;
		return (binary_search_helper(array, new_size, value, index_offset + 0));
	}
}

/**
 * printarray - print an array
 * @array: array to be printed
 * @size: number of elements in array
 */
void printarray(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
