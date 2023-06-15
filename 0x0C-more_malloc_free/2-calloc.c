#include "main.h"

/**
 * _calloc - function that allocates mem for an array
 * @nmemb: number of array elemets
 * @size: size of array in bytes
 *
 * Return: pointer to the new memory.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		ptr[b] = 0;

	return (ptr);
}
