#include "main.h"


void _puts(char *str)
{
	int i;

	for(i = 0; i != '\0'; i++)
		_putchar(str[i]);
	putchar('\n');
	
}
