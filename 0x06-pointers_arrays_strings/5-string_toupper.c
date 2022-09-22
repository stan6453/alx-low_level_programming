

/**
 * string_toupper - multiplies two digits
 * @str: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *string_toupper(char *str)
{
	int i = 0, letter;

	while (str[i] != '\0')
	{
		letter = str[i];
		if (letter >= 'a' && letter <= 'z')
			str[i] = letter - 32;
		i++;
	}
	return (str);
}
