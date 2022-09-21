

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while(1)
	{
		while ((dest[i++] = src[j++]) != '\0' && i-2 !=  n) /* copy src */
			;
		if(i-2 == n)
			break;
		j = 0;
	}
	return (dest);
}
