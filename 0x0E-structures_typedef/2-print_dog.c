#include <stdio.h>
#include "dog.h"
/**
 * print_dog - multiplies two digits
 * @d: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
