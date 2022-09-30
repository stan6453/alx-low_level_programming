

/**
 * _strcmp - multiplies two digits
 * @s1: 1st digit in the multiplication
 * @s2: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
}
