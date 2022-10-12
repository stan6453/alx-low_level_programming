#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcode of the main fn
 * @argc: the name to be printed
 * @argv: the callback function
 * Description: prints the opcode of the main fn
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int num, i;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int (*fun)(int, char **) = main;
	for (i = 0; i < num; i++)
	{
		if (i != num - 1)
			printf("%x ", fun++);
		else
			printf("%x", fun);
	}
}
