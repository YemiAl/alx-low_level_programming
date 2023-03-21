#include "main.h"

/**
 * print_times_table - program that prints n times table
 * @n: number of times table to be printed
 */

void print_times_table(int n)
{
	int a, b, i, j = 0;

	if ((n <= 15) && (n >= 0))
	{
		for (a = 0; a <= n; a++) /*print 10 lines of increasing diff */
		{
			int i = 0;

			_putchar('0'); /* print the first 0 */
			for (b = 0; b <= (n - 1); b++)
			{
				i = i + j;
				_putchar(',');

				if (i > 9 && i < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				else if (i > 99 && i < 1000)
				{
					_putchar(' ');
					_putchar((i / 100) + '0');
					_putchar(((i / 10) % 10) + '0');
					_putchar((i % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(i + '0');
				}
			}
			j++;
			_putchar('\n');
		}
	}
}
