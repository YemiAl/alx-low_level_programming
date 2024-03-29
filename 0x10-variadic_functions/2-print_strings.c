#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: character between strings
 * @n: number of characters
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *var;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		var = va_arg(args, char *);

		if (var == NULL)
			var = "(nil)";

		printf("%s", var);

		if (i < (n - 1))
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
