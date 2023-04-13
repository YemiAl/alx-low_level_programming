#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of characters in the second string to be added
*
* Return: pointer to new string containing s1 and s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length, len1 = 0, len2 = 0;
	char *cpy;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	length = len1 + n;
	cpy = malloc(length * sizeof(char));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		cpy[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		cpy[i + len1] = s2[i];
	}

	cpy[length] = '\0';
	return (cpy);
}
