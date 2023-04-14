#include "main.h"

/**
 * _calloc - function that allocates memory for an array of elements
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
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
