#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	int count = 0;

	if ((n % 2) == 1)
	{
		return (-1);
	}

	if (n >= 2)
	{
		count++;
		count = count + _sqrt_recursion(n / 2);
		return (count);
	}

	else
	{
		return (0);
	}
}
