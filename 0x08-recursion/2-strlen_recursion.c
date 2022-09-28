#include "main.h"

/**
 *  int _strlen_recursion - multiplies two digits
 * @s: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	else
		return (0)
}
