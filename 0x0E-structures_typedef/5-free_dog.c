#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - multiplies two digits
 * @d: 1st digit in the multiplication
 * Description: multiplies two digits
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
