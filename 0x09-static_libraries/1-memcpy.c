#include "main.h"

/**
 * _memcpy - copies n bytes of memory from src to dest
 * @dest: location to be copied to
 * @src: location from where data is being copied from
 * @n: number of bytes of memory to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
