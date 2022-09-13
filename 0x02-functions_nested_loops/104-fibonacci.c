#include <stdio.h>

/**
 *main - program execution starts here
 *Description: this is the main function
 *Return: an integer to signify success or failure
 */
int main(void)
{
	unsigned long int prevfibonacci = 1;
	unsigned long int fibonacci = 2;
	int counter = 1;
	unsigned long int swap;

	printf("%lu, %lu, ", prevfibonacci, fibonacci);
	while (counter <= 98)
	{
		swap = fibonacci;
		fibonacci = fibonacci + prevfibonacci;
		printf("%lu, ", fibonacci);
		prevfibonacci = swap;
		counter++;
	}
	return (0);
}
