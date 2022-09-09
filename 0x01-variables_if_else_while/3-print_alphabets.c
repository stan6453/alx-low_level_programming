#include <stdio.h>

int main(void)
{

	int alphabet = 'a';

	while (alphabet < 123)
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'A';

	while (alphabet < 91)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
