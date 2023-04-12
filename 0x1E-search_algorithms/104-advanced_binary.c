#include "search_algos.h"
void advanced_binary_helper(int *array, size_t low, size_t high,
							int value, int *found_index);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where the value is located.
 *	   -1 if value is not present in array, or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int found_index = -1;

	advanced_binary_helper(array, 0, size - 1, value, &found_index);
	return (found_index);
}

/**
 * advanced_binary_helper - searches for the first value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: index of the left-hand-side pointer
 * @high: index of the right-hand-side-pointer
 * @value: value to search for
 * @found_index: the index at which the value was found
 */
void advanced_binary_helper(int *array, size_t low, size_t high,
							int value, int *found_index)
{
	size_t mid;

	if (array == NULL)
		return;

	if (low > high)
		return;

	printf("Searching in array: ");
	printarray2(array, low, high);

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		*found_index = mid;
		if (low == high)
			return;
		advanced_binary_helper(array, low, mid, value, found_index);
	}
	else if (array[mid] > value)
	{
		advanced_binary_helper(array, low, mid - 1, value, found_index);
	}
	else if (array[mid] < value)
	{
		advanced_binary_helper(array, mid + 1, high, value, found_index);
	}
}

/**
 * printarray2 - print an array
 * @array: array to be printed
 * @low: index to begin printing at
 * @high: index to stop printing at
 */
void printarray2(int *array, size_t low, size_t high)
{
	size_t i;

	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
