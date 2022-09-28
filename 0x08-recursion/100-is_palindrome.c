

/**
 * is_palindrome - multiplies two digits
 * @s: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int is_palindrome(char *s)
{

	static char * p;

	if (*s != '\0')
		return (is_palindrome(s+1));
}
