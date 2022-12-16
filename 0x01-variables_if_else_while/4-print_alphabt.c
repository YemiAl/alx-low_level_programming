#include <stdio.h>

/**
 * main - program that prints all alphabets in lowercase except q and e
 *
 * Return: (alphabets)
 */

int main(void)

{

char i;

for (i = 'a'; i <= 'z'; i++)
{
if ((i == 'e') || (i == 'q'))

{
continue;
}

putchar(i);
}

putchar('\n');

return (0)
}
