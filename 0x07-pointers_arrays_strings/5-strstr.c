#include <stdio.h>
/**
 * _strstr - multiplies two digits
 * @haystack: 1st digit in the multiplication
 * @needle: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, temp;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			temp = i;
			for (j = 0; needle[j] != '\0' && haystack[temp] != '\0'; j++, temp++)
			{

				if (haystack[temp] != needle[j])
				{
					break;
				}

			}
			if (needle[j] == '\0' && needle[--j] == haystack[--temp])
				return (&haystack[temp - j]);
		}
	}
	return (NULL);
}
