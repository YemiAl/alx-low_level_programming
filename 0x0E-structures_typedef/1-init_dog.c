#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialises a variable of type Struct dog
 *
 * @d:Name of the struct dog
 * @name: name of the variable
 * @age: age of the variable
 * @owner: owner of the variable
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
