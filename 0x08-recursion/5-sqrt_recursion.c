
/**
 * find_square - multiplies two digits
 * @n: 1st digit in the multiplication
 * @num: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int find_square(int n, int num)
{
	if (num * num == n)
		return (num);
	if (num * num > n)
		return (-1);
	return (find_square(n, ++num));
}


/**
 * _sqrt_recursion - multiplies two digits
 * @n: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int _sqrt_recursion(int n)
{
	return (find_square(n, 1));
}
