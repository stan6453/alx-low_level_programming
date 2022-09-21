

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0') /* find end of s */
		i++;
	while ((dest[i++] = src[j++]) != '\0') /* copy t */
		;
}
