#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: address of number
 * @index: bit position
 *
 * Return: 1 or 0 if error
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
