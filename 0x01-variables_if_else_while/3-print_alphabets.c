#include <stdio.h>

/**
 * main - Program that outputs the alphabets in lowercase then uppercase
 *
 * Return: Alphabets in lowercase and uppercase
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{

putchar(i);

putchar(i - 32);

}

putchar('\n');

return (0);

}
