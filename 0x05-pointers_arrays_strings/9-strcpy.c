

char *_strcpy(char *dest, char *src)
{
	int index;
	int letter;

	for (index = 0; ((letter = src[index]) != '\0'); index++)
	{
		dest[index] = letter;
	}
	dest[index] = letter;
	return (dest);
}
