

/**
 * find_prime - multiplies two digits
 * @n: 1st digit in the multiplication
 * @num: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int find_prime(int n, int num)
{
	if (num == n)
		return (1);
	if (num % n == 0)
		return (0);
	return (find_prime(n, ++num));
}


/**
 * is_prime_number - multiplies two digits
 * @n: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, 2));
}
