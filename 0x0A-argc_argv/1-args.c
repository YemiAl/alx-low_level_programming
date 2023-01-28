#include <stdio.h>

/**
 * main - program that prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
