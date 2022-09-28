#include "main.h"

/**
 *  _print_rev_recursion - multiplies two digits
 * @s: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
