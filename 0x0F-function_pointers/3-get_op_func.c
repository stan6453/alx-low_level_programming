#include "3-calc.h"
#include <string.h>


/**
 * *get_op - returns a pointer to a math function,
 * based on the the specified arithmetic operator
 * @s: an arithmetic operator
 * Description: returns a pointer to a math function,
 * based on the the specified maths symbol
 * Return: pointer to a fn
 */
void *get_op(char *s)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < (sizeof(ops) / sizeof(op_t)))
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
