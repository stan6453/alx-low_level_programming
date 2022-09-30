
/**
 * _strncpy - multiplies two digits
 * @dest: 1st digit in the multiplication
 * @src: 1st digit in the multiplication
 * @n: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (1)
	{
		while ((dest[i++] = src[j++]) != '\0' && i !=  n) /* copy src */
			;
		if (i == n)
			break;
		j = 0;
	}
	return (dest);
}
