#include "main.h"

/**
 * void times_table - program to print 9 times table
 *
 */

void times_table(void)
{
	int j = 0;
	int a, b;

	for (a = 0; a <= 9; a++) /*print 10 lines of increasing diff */
	{
		int i = 0;

		_putchar('0'); /* print the first 0 and comma */
		_putchar(',');
		_putchar(' ');

		for (b = 0; b <= 8; b++) /* print each line of multiplication*/
		{
			i = i + j;

			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			else
			{
				_putchar(i + '0');
			}

			if (b != 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		j++;

		_putchar('\n');
	}
}
