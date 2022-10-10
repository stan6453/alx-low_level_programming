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
	char *_name = malloc(strlen(name) + 1);
	char *_owner = malloc(strlen(owner) + 1);
	dog_t my_dog;

	strcpy(_name, name);
	strcpy(_owner, owner);

	my_dog.name = _name;
	my_dog.age = age;
	my_dog.owner = owner;

	return (&my_dog);
}
