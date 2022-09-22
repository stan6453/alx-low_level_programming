


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0') /* find end of dest */
		i++;
	while ((dest[i++] = src[j++]) != '\0' && j-1 !=  n) /* copy src */
		;
	return dest;
}
