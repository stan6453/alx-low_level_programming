#include "main.h"

/**
 * puts2 - prints elements of a string, skipping odd indexes
 * @str: the string to print
 * Description: prints the elements of an array at even indexes
 */
void puts2(char *str)
{
	int index, letter;
	for (index = 0;((letter = str[index]) != '\n'); index += 2)
		_putchar(letter);
	putchar('\n');
}
