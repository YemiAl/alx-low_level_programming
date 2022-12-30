#include <stdio.h>
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
			printf("%i", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}

	else if (i > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);

			if (i != 98)
			{
				printf(", ");
			}

		}

	}

	else
	{
		printf("%i", n);
	}

	printf("\n");
}
