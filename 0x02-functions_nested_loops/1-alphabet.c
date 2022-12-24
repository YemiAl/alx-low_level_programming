#include "main.h"

/**
 * main - Program that prints the lowercase alphabets
 *
 * Return: 0
 */

int main(void)
{
	void print_alphabet(void)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}


	print_alphabet();


}
