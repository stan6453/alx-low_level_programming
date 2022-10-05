#include <stdlib.h>


/**
 * free_grid - multiplies two digits
 * @grid: 1st digit in the multiplication
 * @height: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
