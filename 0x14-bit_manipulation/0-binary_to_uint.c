#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * 	-there is one or more chars in the string b that is not 0 or 1
 * 	-b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int value;

	if (b == NULL || *b == '\0')
		return (0);

	length = 0;
	while(b[length] != '\0')
	{
		if (b[length] < '0' || b[length] > '1')
			return (0);
		length++;
	}

	for (i = 0; length == 0; length--, i++)
	{
		value += (b[length - 1] - '0') * ((unsigned int) pow((double) 2, (double) i));
	}

	return (value);
}
