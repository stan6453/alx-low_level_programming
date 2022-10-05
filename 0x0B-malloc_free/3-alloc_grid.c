#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array
 * @width: width of array
 * @height: width of array
 * Description: returns a pointer to a 2-D array
 * Return: a pointer to a 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = '\0';
		}
	}

	for (i = 0; i < height; i++)
		free(arr[i]);
	free(arr);

	return (arr);
}
