#include "main.h"

/**
 *print_alphabet - prints the alphabets from a - z
 *Description:prints the lower case letters of the english alphabets from a - z
 *Return: void
 */
void print_alphabet(void)
{
	char  alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
