#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that calculates amount of change required
 * @argc: count of arguments
 * @argv: argument vectors
 *
 * Return: 0 or 1 if error
 */

int main(int argc, char **argv)
{
	int i, x, result, count = 0;

	int money[] = {25, 10, 5, 2, 1};

	int total = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		x = money[i];

		if (total >= x)
		{
			result = total / x; /*divide by the note*/
			count = count + result; /*update the count*/
			total = total - (result * x); /*cal the rem*/
		}
	}

	printf("%d\n", count);
	return (0);
}
