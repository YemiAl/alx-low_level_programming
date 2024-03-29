#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that returns a void ptr
 * @b: number of bytes of memory
 *
 * Return: void pointer to memory requested
 */

void *malloc_checked(unsigned int b)
{
	void *vp;

	vp = malloc(b);

	if (vp == NULL)
	{
		exit(98);
	}

	else
	{
		return (vp);
	}
}
