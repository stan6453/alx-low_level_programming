

/**
 * int_index - calls a callback function that prints a name
 * @array: the name to be printed
 * @size: the callback function
 * @cmp: the callback function
 * Description: calls a callback function that prints a name
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
