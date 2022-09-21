


void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}

}
