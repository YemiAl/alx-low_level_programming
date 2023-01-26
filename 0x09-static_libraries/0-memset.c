#include "main.h"

/**
 * _memset - fills a specified size of memory with a value
 * @s: a pointer to the memory to be filled
 * @b: the value to be filled in the memory
 * @n: number of bytes of memory to be filled
 * Return: A pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
