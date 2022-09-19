#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: sting to cut in half
 * Description: prints the second half of a string followed by a new line
 */
void puts_half(char *str)
{
	int letter_count, midstring;

	/*get length of string*/
	for (letter_count = 0; s[letter_count] != '\0'; letter_count++)
		;

	/*get the middle of the string*/
	midstring = (letter_count - 1) / 2;

	/*print from middle of sting to the end*/
	for (letter_count--; midsting <= letter_count; midstring++)
		_putchar(str[midstring]);
	putchar('\n');
}
