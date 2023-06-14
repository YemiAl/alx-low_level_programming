#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array and initialises it to a char
 * @size: size of memory
 * @c: character to initialise to
 *
 * Return: pointer to the char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
