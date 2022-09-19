
/**
 * _atoi -  convert a string to an integer
 * @s: the sting to convert to integer
 * Description:  convert a string of numbers to an integer
 * Return: integer gotten from string
 */
int _atoi(char *s)
{
	int i, n, sign = 1, no_of_dash = 0;

	/* skip any character that is not a number*/
	for (i = 0; s[i] < '0' || s[i] > '9'; i++)
	{
		if (s[i] == '\0')
			return (0);
		if (s[i] == '-')
			no_of_dash++;
	}

	sign = (no_of_dash % 2 == 0) ? 1 : -1;
	for (n = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return (sign * n);
}
