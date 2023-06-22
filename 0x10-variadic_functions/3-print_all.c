#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - program that prints all formats
 * @format: format of the variable
 *
 */

void print_all(const char * const format, ...)
{
	int check, i = 0;
	va_list args;
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{

		case 'c':
			printf("%c", va_arg(args, int));
			check = 0;
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			check = 0;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			check = 0;
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			check = 0;
			break;
		default:
			check = 1;
			break;
		}
		if ((format[i + 1] != '\0') && (check == 0))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
