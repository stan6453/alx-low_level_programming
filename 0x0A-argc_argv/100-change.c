#include "main.h"

/**
 * main - prints the minimum number of change
 * @argc: size of argv
 * @argv: array of command line arguments
 * Description: prints the minimun number of change
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int reg[] = {25, 10, 5, 2, 1};
	int cent;
	int num = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cent; i++)
	{
		if (!((cent - reg[i]) < 0))
		{
			cent = cent - reg[i];
			num++;
			--i;
		}
	}
	printf("%d\n", num);
	return (0);
}
