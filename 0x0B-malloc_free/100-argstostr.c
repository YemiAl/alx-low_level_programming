#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a sting
 * @str: string to be counted
 *
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int count = 0;

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}


/**
 * argstostr - function that concatenates the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, count, total = 0;
	char *copy;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++) /* find the total no of char for malloc*/
	{
		count = _strlen(av[i]);
		total = total + count;
	}

	copy = malloc((total + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	total = 0;

	for (i = 0; i < ac; i++)
	{
		count = _strlen(av[i]);

		for (j = 0; j < count; j++)
		{
			_putchar(av[i][j]);
			total++;
		}
		_putchar('\n');
	}

	copy[total] = '\0';
	return (copy);
}
