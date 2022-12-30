#include "main.h"

/**
 * print_to_98 - function that prints to 98
 * @n: number to start counting from
 */

void print_to_98(int n)
{
	int i;

	if (i < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	else if (i > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

		}

	}

	else
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}
