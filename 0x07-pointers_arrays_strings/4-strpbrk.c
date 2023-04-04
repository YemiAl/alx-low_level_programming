#include "main.h"

/**
 * _strpbrk - function that returns the first occurence of a string in accept
 * @s: main string that could either contains accept or not
 * @accept: bytes of strings to be checked
 *
 * Return: pointer to the byte in s that contains accept or NULL if it doesnt
 */

char *_strpbrk(char *s, char *accept)
{
	int j, i = 0;

	while (s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[0] == accept[j])
			{
				return (s);
			}
		}

		if (accept[j] == '\0')
		{
			s++;
		}
	}

	return (NULL);
}
