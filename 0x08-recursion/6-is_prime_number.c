#include "main.h"

/**
 * prime_check - checks if an integer is prime
 * @a: divisor
 * @b: integer to be checked
 *
 * Return: 1 if its prime and 0 if it isnt
 */

int prime_check(int a, int b)
{
	if ((b < 2) || ((b % a) == 0))
	{
		return (0);
	}

	if (a > (b / 2))
	{
		return (1);
	}

	return (prime_check((a + 1), b));
}

/**
 * is_prime_number - check if an integer is prime
 * @n: integer to be checked
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	else
	{
		return (prime_check(2, n));
	}
}
