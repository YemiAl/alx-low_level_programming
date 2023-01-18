#include "main.h"

/**
 * _strspn - function that returns the number of bytes common to two strings
 * @s: main string consisting of both accept and other strings
 * @accept: string to be checked
 *
 * Return: count of string common to both
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check++;
			}
		}

		if (check == 0)
			break;
	}

	return (count);

}
