#include "main.h"

/**
 * main - prints the minimum number of change
 * @argc: size of argv
 * @argv: array of command line arguments
 * Description: prints the minimun number of change
 * Return: 0 or 1
 */
int main(int argc, char* argv[])
{
	int reg = {25, 10, 5, 2, 1};
	int cent = atio(argv[1]);
	int num = 0;
	int i;

	if (argc != 2)
	{
		puts("Error\n");
		return (1);
	}
	if (cent < 0)
	{
		puts("0\n");
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
