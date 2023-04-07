#include "main.h"


/**
 * sq - returns the natural square root of a number
 * @a: variable to start checking with, from 0
 * @b: integer to find the square root of
 *
 * Return: the square root or -1
 */

int sq(int a, int b)
{
	if ((a * a) == b)
	{
		return (a);
	}

	if ((a * a) > b)
	{
		return (-1);
	}

	return (sq((a + 1), b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	return (sq(0, n));
}
