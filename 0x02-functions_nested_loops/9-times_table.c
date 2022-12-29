#include <stdio.h>

/**
 * main - program to print 9 times table
 *
 * Return: 0
 */

int main(void)
{
	int j = 0;
	int a, b;

	for (a = 0; a <= 9; a++) /*print 10 lines of increasing diff */
	{
		int i = 0;

		putchar('0'); /* print the first 0 and comma */
		putchar(',');
		putchar(' ');

		for (b = 0; b <= 8; b++) /* print each line of multiplication*/
		{
			i = i + j;

			if (i > 9)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}

			else
			{
				putchar(i + '0');
			}

			if (b != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

		j++;

		putchar('\n');
	}
	return (0);
}
