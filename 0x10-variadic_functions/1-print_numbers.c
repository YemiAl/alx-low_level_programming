#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: separator between numbers
 * @n: number of numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int var = va_arg(args, unsigned int);

		printf("%d", var);

		if (separator == NULL)
			separator = "";

		if (i != (n - 1))
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
