#include "main.h"

/**
 * main - adds a list of numbers
 * @argc: size of argv
 * @argv: array of command line arguments
 * Description: adds a list of numbers
 * Return: 0 or 1
 */
int main(int argc, char* argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][1]))
		{
			puts("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


