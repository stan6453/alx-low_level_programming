#include <stdlib.h>
#include <stdio.h>

/**
 * isonlydigit - checks if a string contains only digits
 * @s: string to be checked
 * Description: checks if a string contains only digit
 * Return: 1 if string contains only didgit
 *         0 if string has at lest one non-digit character
 */
int isonlydigit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}


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

	if (!isonlydigit(argv[1]))
	{
		printf("Error\n");
		exit(3);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	c = (char *) main;
	for (i = 0; i < num; i++)
	{
		if (i != num - 1)
			printf("%02hhx ", *(c++));
		else
			printf("%02hhx", *c);
	}
}
