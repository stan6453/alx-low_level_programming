#include <stdio.h>


/**
 *main - program execution starts here
 *Description: this is the main function
 *Return: an integer to signify success or failure
 */
int main(void)
{
	int i, j, k, l, x_value, y_value, unique_combination, isunique;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					x_value = i + j;
					y_value = k + l;
					isunique = (i != k || j != l);
					unique_combination = (x_value < y_value || i < k);
					if (isunique && unique_combination)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);

						if (i != '9' || j != '8' || k != '9' || l != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
