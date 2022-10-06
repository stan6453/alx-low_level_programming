



/**
 * string_nconcat - multiplies two digits
 * @s1: 1st digit in the multiplication
 * @s2: 1st digit in the multiplication
 * @n: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j;
	unsigned int size;

	if (strlen(s2) < n)
		n = strlen(s2);
	size = strlen(s1) + n + 1;
	ptr = malloc(size);
	if (ptr == NULl)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
