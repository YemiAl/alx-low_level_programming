#include <stdio.h>

/**
 * main - Program that outputs the alphabets in lowercase then uppercase
 *
 * Return: Alphabets in lowercase and uppercase
 */

int main(void)
{
char i;
char j;

for (i = 'a'; i <= 'z'; i++)
{

putchar(i);

}


for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);

}

putchar('\n');

return (0);

}
