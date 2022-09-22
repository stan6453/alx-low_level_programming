

/**
 * cap_string - multiplies two digits
 * @str: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *cap_string(char *str)
{
	int i, ch, prev_space = 0;

	i = 0;
	while (str[i] != '\0')
	{
		ch = str[i];
		if (ch == '\n' || ch == ' ' || ch == '\t' || ch == '.')
			prev_space = 1;
		if (ch >= 'a' && ch <= 'z' && prev_space)
		{
			str[i] = ch - 32;
			prev_space = 0;
		}
		else if (ch != '\n' && ch != ' ' && ch != '\t' &&
				ch != '.' && prev_space)
		{
			prev_space = 0;
		}
		i++;
	}
	return (str);
}
