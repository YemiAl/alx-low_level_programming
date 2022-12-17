#include <stdio.h>

/**
 * main - Program that prints the alphabets backwards with putchar
 *
 * Return: characters
 */

int main(void)

{
char i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}

putchar('\n');

return (0);

}
