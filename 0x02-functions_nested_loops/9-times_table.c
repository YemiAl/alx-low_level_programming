#include "main.h"

/**
 * times_table - program to print 9 times table
 */

void times_table(void)
{
	int j = 0;
	int a, b;

	for (a = 0; a <= 9; a++) /*print 10 lines of increasing diff */
	{
		int i = 0;

		_putchar('0'); /* print the first 0 */

		for (b = 0; b <= 8; b++) /* print each line of multiplication*/
		{
			i = i + j;  /* j increments after each line */

			if (i > 9)
			{
				_putchar(',');
				_putchar(' ');

				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			else

			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

				_putchar(i + '0');
			}
		}

		j++;

		_putchar('\n');
	}
}
