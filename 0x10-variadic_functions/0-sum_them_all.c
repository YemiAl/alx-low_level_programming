#include <stdarg.h>

/**
 * sum_them_all - function that adds all numbers provided
 *
 * @n : count of numbers
 *
 * Return: sum of number
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list st;
	unsigned int i;
	int sum = 0;

	va_start(st, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		unsigned int var = va_arg(st, unsigned int);

		sum = sum + var;
	}

	va_end(st);

	return (sum);
}
