

/**
 * set_string - multiplies two digits
 * @s: 1st digit in the multiplication
 * @to: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; *((*s) + i) != '\0' && *(to + 1) != '\0'; i++)
	{
		*((*s) + i) = *(to + i);
	}
}
