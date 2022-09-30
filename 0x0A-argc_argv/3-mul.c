#include "main.h"

/**
 * main - adds two numbers
 * @argc: size of argv
 * @argv: array of command line arguments
 * Description: adds two numbers
 * Return: 0 or 1
 */
int main(int argc, char* argv[])
{
	int i, sum = 0;

	for (i = 1; i < 3; i++)
	{
		if (arg[i] == NULL)
		{
			puts("Error\n");
			return (1);
		}
		sum += (int) argv[i];
	}
	printf("%d\n", sum);
	return (0);
}

