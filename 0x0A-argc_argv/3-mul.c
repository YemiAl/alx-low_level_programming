#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two given integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int x = atoi(argv[1]);

		int y = atoi(argv[2]);

		printf("%i\n", x * y);

		return (0);
	}

	else
	{
		printf("Error\n");

		return (1);
	}
}
