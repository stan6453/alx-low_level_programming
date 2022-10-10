#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - multiplies two digits
 * @name: 1st digit in the multiplication
 * @age: 1st digit in the multiplication
 * @owner: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	strcpy(my_dog->name, name);
	strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (&my_dog);
}
