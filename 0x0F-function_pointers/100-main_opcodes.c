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
		return (NULL);
	num = atoi(argv[1]);

	c = main;
	for (i = 0; i < num; i++)
		printf("%x", c++);
}
