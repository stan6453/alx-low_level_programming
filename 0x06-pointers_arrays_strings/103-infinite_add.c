
/**
 * infinite_add - multiplies two digits
 * @n1: 1st digit in the multiplication
 * @n2: 1st digit in the multiplication
 * @r: 1st digit in the multiplication
 * @size_r: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int fnum, snum, sum, base, rem, n1length, n2length;

	/*find length of n1 and n2*/
	n1length = 0;
	while (n1[++n1length] != '\0')
		;
	n2length = 0;
	while (n2[++n2length] != '\0')
		;
	/*add number starting from last index*/
	rem = 0;
	size_r--;
	while (n1length >= 0 || n2length >= 0)
	{
		if (size_r < 0)
			return (0);
		if (n1length >= 0)
			fnum = n1[n1length] - '0';
		else
			fnum = 0;
		if (n2length >= 0)
			snum = n2[n2length] - '0';
		else
			snum = 0;
		sum = fnum + snum;
		if (sum > 9)
		{
			base = sum % 10;
			r[size_r] = (base + rem) + '0';
			rem = sum / 10;
		}
		else
		{
			base = sum;
			r[size_r] = (base + rem) + '0';
			rem = 0;
		}

		size_r--;
		n1length--;
		n2length--;
	}

	return (r);
}
