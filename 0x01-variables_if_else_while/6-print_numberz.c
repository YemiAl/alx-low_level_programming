#include <stdio.h>

/**
 * main - Program that prints single digits with putchar
 *
 * Return: All numbers
 */

int main(void)

{
int i;

for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');

}
putchar('\n');

return (0);

}
