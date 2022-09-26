
/**
 * _memset - multiplies two digits
 * @s: 1st digit in the multiplication
 * @b: 1st digit in the multiplication
 * @n: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
