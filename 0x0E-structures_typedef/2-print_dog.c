#include "dog.h"
#include <stdio.h>


/**
 * print_dog -  function that prints a struct dog
 * @d: pointer to the struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: %.6f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
