#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - program that creates a new dog
 * @name: name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Return: A new dog of struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);

	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));

	if (dog->owner == NULL)
	{
		free(dog);

		free(dog->name);

		return (NULL);
	}

	_strcpy(dog->name, name);

	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);

}
