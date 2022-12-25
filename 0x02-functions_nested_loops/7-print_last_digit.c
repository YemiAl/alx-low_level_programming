#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: input
 * Return: Last digit
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
		j = j * -1;

	_putchar(j + '0');

	return (j);

}
