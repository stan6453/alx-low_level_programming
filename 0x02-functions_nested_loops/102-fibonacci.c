#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers
 *Description: prints the first 50 Fibonacci numbers
 *Return: an integer to signify success or failure
 */
int main(void)
{
	int prevfibonacci = 1;
	int fibonacci = 2;
	int counter = 1;
	int swap;

	printf("%d\n%d\n", prevfibonacci, fibonacci);
	while (counter <= 50)
	{
		swap = fibonacci;
		fibonacci = fibonacci + prevfibonacci;
		printf("%d\n", fibonacci);
		prevfibonacci = swap;
		counter++;
	}

	return (0);
}
