#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

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
	printf("%d", (*f)(num1, num2));
	return (1);
}
