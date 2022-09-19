
/**
 * _atio -  convert a string to an integer
 * @s: the sting to convert to integer
 * Description:  convert a string of numbers to an integer
 * Return: integer gotten from string
 */
int _atoi(char *s)
{
	int i, n, sign;

	/* skip white space*/
	for (i = 0; s[i] == ' '; i++)
		;
	sign = (s[i] == '-') ? -1 : 1;

	/*skip sign */
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return (sign * n);
}
