#include "3-calc.h"
#include <stdlib.c>
#include <stdio.h>


int main (argc, *argv[])
{
	int num1 = atio(argv[1]);
	int num2 = atio(argv[3]);
	char op = argv[2];

	int (*f)(int,int) = get_op(&operator);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op != "+" && op != "-" && op != "*" && op != "/" && op != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == "/" || op == "%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d", f(num1, num2));
	return (1);
}
