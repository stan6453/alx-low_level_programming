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
	dog_t *my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->owner = malloc(sizeof(char) * (strlen(owner) +1));
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(sizeof(char) * (strlen(name) +1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		free(my_dog->owner);
		return (NULL);
	}

	strcpy(my_dog->owner, owner);
	strcpy(my_dog->name, name);
	my_dog->age = age;
	return (my_dog);
}
