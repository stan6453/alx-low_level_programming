#include <stddef.h>

/**
 * array_iterator - calls a callback function that prints a name
 * @array: the name to be printed
 * @size: the callback function
 * @action: the callback function
 * Description: calls a callback function that prints a name
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
