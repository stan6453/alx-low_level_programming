#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers
 *Description: prints the first 50 Fibonacci numbers
 *Return: an integer to signify success or failure
 */
int main(void)
{
	unsigned long int prevfibonacci = 1;
	
	unsigned long int fibonacci = 2;
	int counter = 1;
	unsigned long int swap;

	printf("%lu, %lu, ", prevfibonacci, fibonacci);
	while (counter <= 50)
	{
		swap = fibonacci;
		fibonacci = fibonacci + prevfibonacci;
		printf("%lu, ", fibonacci);
		prevfibonacci = swap;
		counter++;
	}

	return (0);
}
