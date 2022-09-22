
/**
 * infinite_add - multiplies two digits
 * @n1: 1st digit in the multiplication
 * @n2: 1st digit in the multiplication
 * @r: 1st digit in the multiplication
 * @size_r: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *infinite_add(char *n1, char *n2,
		char *r, int size_r)
{
	int fnum, snum, sum, base, rem = 0, n1length = 0, n2length = 0;

	while (n1[++n1length] != '\0');
	n1length--;
	while (n2[++n2length] != '\0');
	n2length--;
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
		sum = fnum + snum + rem;
		if (sum > 9)
		{
			base = sum % 10;
			r[size_r] = base + '0';
			rem = sum / 10;
		}
		else
		{
			base = sum;
			r[size_r] = base + '0';
			rem = 0;
		}
		size_r--;
		n1length--;
		n2length--;
	}
	if(size_r < 0 && rem)
		return(0);
	else if (size_r >=0 && rem)
		r[size_r] = rem;
	return (r);
}
