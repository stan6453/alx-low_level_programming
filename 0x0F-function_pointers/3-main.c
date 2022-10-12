#include "3-calc.h"
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
 * main - calls a callback function that prints a name
 * @argc: the name to be printed
 * @argv: the callback function
 * Description: calls a callback function that prints a name
 * Return: void
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *ops;
	char op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!isonlydigit(argv[1]) || !isonlydigit(argv[3]))
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = argv[2];
	op = argv[2][0];


	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(ops);
	printf("%d\n", (*f)(num1, num2));
	return (0);
}
