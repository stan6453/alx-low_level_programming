#include "search_algos.h"
int interpolation_search_helper(int *array, size_t low, size_t high, int value);

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	return (interpolation_search_helper(array, 0, size - 1, value));
}

/**
 * interpolation_search_helper - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: index of the left-hand-side pointer
 * @high: index of the right-hand-side-pointer
 * @value: value to search for
 * Return: index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int interpolation_search_helper(int *array, size_t low, size_t high, int value)
{
	int pos;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

	if ((size_t)pos > high)
	{
		printf("Value checked array[%d] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
	{
		return (pos);
	}
	else if (low == high)
	{
		return (-1);
	}
	else if (array[pos] < value)
	{
		return (interpolation_search_helper(array, pos + 1, high, value));
	}
	return (interpolation_search_helper(array, low, pos - 1, value));
}
