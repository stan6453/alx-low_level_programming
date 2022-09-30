#include "main.h"

/**
 * main - adds two numbers
 * @argc: size of argv
 * @argv: array of command line arguments
 * Description: adds two numbers
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	(void) argc;
	for (i = 1; i < 3; i++)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}

