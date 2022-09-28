#include <stdio.h>
/**
 * _puts_recursion - multiplies two digits
 * @s: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
