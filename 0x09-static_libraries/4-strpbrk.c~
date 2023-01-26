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
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int check = 0; /* counter for when the values are not same */
		int check_true = 0; /** counter for when the values are same */

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
			{
				check++;
			}

			else
			{
				check_true++;
				break;
			}
		}

		if (check != 0 && check_true == 0)
		{
			count++;
		}

		if (check_true != 0)
			break;
	}

	if (count == 0)
		return (NULL);
	else
		return (s + count);
}
