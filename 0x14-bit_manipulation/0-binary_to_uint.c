#include "main.h"

/**
 * binary_to_uint - functio that converts binary to decimal
 * @b: pointer to the binary char
 *
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, number, sum = 0, count = 0, power = 1;
	char c;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		count++;

	while (count)
	{
		c = b[count - 1];

		if ((c != '0') && (c != '1'))
			return (0);
		number = c - '0';

		number = number * power;
		sum = sum + number;
		count--;
		power *= 2;
	}

	return (sum);
}
