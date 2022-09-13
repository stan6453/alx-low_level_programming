

/**
 *main - program execution starts here
 *Description: this is the main function
 *Return: an integer to signify success or failure
 */
void main(void)
{
	int prevfibonacci = 1;
	int fibonacci = 2;
	int swap;
	int sumofeven = 0;

	printf("%d\n", sumofeven += 2);
	while (fibonacci < 4000000)
	{
		swap = fibonacci;
		fibonacci = fibonacci + prevfibonacci;
		if (fibonacci % 2 == 0)
		{
			sumofeven += fibonacci;
			printf("%d\n", sumofeven);
		}
		prevfibonacci = swap;
	}
}
