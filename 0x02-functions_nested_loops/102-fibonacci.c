

/**
 *main - program execution starts here
 *Description: this is the main function
 *Return: an integer to signify success or failure
 */
void main(void)
{
	int prevfibonacci = 1;
	int fibonacci = 2;
	int counter = 1;
	int swap;

	printf("%d\n%d\n", prevfibonacci, fibonacci);
	while(counter <= 50)
	{
		swap = fibonacci;
		fibonacci = fibonacci + prevfibonacci;
		printf("%d\n", fibonacci);
		prevfibonacci = swap;
		counter++;
	}
}
