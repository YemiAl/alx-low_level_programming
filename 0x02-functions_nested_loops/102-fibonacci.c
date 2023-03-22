#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 3;

	unsigned long int x = 1, y = 2, sum;

	printf("%lu, %lu, ", x, y);

	while (i <= 50)
	{
		sum = x + y;
		printf("%lu", sum);

		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}

		x = y;
		y = sum;
		i++;
	}
	putchar('\n');
	return (0);
}
