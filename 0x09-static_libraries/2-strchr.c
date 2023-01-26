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
	while (*s)

	{
		if (*s != c)
			s++;

		else
			return (s);

	}

	if (c == '\0')

		return (s);

	return (0);
}
