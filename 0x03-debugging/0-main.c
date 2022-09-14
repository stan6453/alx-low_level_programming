#include "main.h"



/**
 *
 * * main - tests function that prints if integer is positive or negative
 *
 * * Return: 0
 *
 * */



int main(void)
{
	int answer = positive_or_negative(0);
	
	if (answer > 0)
		printf("%d is positive", answer);
	else if (answer < 0)
		printf("%d is negative", answer);
	else
		printf("%d is zero", answer);

	return (0);

}
