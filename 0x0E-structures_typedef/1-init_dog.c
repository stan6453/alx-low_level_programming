#include "dog.h"

/**
 * init_dog - multiplies two digits
 * @d: 1st digit in the multiplication
 * @name: 1st digit in the multiplication
 * @age: 1st digit in the multiplication
 * @owner: 1st digit in the multiplication
 * Description: multiplies two digits
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
