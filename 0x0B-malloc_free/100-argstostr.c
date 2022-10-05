#include <stdlib.h>



/**
 * argstostr - multiplies two digits
 * @ac: 1st digit in the multiplication
 * @av: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str++ = av[i][j];
		}
		*str++ = '\n';
	}
	return (str);
}
