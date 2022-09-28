

/**
 * _pow_recursion - multiplies two digits
 * @x: 1st digit in the multiplication
 * @y: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
