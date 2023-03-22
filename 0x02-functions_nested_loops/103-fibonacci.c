#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	unsigned int x = 1, y = 2, sum = 0;

	printf("%d", y);

	while (sum <= 4000000)
	{
		sum = x + y;

		if (sum % 2 == 0)
		{
			putchar(',');
			putchar(' ');

			putchar("%u", sum);
		}

		x = y;
		y = sum;
		i++;
	}
	putchar('\n');
}
