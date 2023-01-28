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
	int x = atoi(argv[1]);

	int y = atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		printf("%i\n", x * y);

		return (0);
	}
}
