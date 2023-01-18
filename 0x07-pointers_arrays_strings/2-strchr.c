#include "main.h"

/**
 * _strchr - function that locates the first occurence of a character in string
 * @s: the string where the character is located
 * @c: the character that is being located
 *
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)

			return (s + i);
	}

	return (NULL);
}
