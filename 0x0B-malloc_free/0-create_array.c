
/**
 * create_array - multiplies two digits
 * @size: 1st digit in the multiplication
 * @c: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *create_array(unsigned int size, char c)
{
	char *mem, *head;

	mem = (char *) malloc(size);
	head = mem;
	while (size > 0)
	{
		(*mem)++ = c;
		size--;
	}
	return (head);
}
