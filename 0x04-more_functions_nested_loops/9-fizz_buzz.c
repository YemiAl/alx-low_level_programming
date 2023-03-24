#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int fizz, buzz;

	for (i = 1; i <= 100; i++)
	{
		fizz = i % 3;
		buzz = i % 5;

		if (fizz == 0 && buzz != 0)
		{
			printf("Fizz ");
		}

		if (fizz != 0 && buzz == 0)
		{
			printf("Buzz ");
		}

		if (fizz == 0 && buzz == 0)
		{
			printf("FizzBuzz ");
		}

		if (fizz != 0 && buzz != 0)
			printf("%d ", i);
	}

	return (0);
}
