#include <stdlib.h>


/**
 * _str_len - finds length of a string
 * @str: string to find its length
 * Description: finds length of a string (not including null character)
 * Return: length of string
 */
int _str_len(char *str){
	int i;
	
	if(str == NULL)
		return (0);
	
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - multiplies two digits
 * @ac: 1st digit in the multiplication
 * @av: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *argstostr(int ac, char **av)
{
	char *str, *head;
	int i, j, str_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str_len += _str_len(av[i]);
		str_len++; /*for the new line characters*/
	}
	str = malloc(srt_len + 1);
	head = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str++ = av[i][j];
		}
		*str++ = '\n';
	}
	return (head);
}
