

/**
 *print_times_table - prints a multiplication table
 *@n: the end and size od the multiplication table
 *Description: prints an nxn multiplication table thta starts from 0 and stops at n
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 &&  n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{

				if (i != n && j != n)
					printf("%d, ", i * j);
				else
					printf("%d", i * j);
				
			}
			putchar('\n');
		}
	}
}
