

/**
 * reverse_array - multiplies two digits
 * @a: 1st digit in the multiplication
 * @n: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}

}
