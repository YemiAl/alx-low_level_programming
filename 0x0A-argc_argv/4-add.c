#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: sum
 */

int main(int argc, char *argv[])
{
	if (argc == 1) /* if no number is passed */
	{
		printf("0\n");
		return (0);
	}

	else
	{
		int sum = 0;

		int str_to_len;

		int i;

		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			else
			{
				str_to_len = atoi(argv[i]);

				sum = sum + str_to_len;
			}
		}

		printf("%i\n", sum);
	}

	return (0);
}
