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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char op = argv[2][0];

	int (*f)(int, int) = get_op_func(&op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
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
	printf("%d", f(num1, num2));
	return (1);
}
