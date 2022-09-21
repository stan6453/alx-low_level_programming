


char *string_toupper(char *str)
{
	int i = 0, letter;

	while (str[i] != '\0')
	{
		letter = str[i];
		if (letter >='a' && letter <='z')
			str[i] = letter - 32;
		i++
	}
	return (str);
}
