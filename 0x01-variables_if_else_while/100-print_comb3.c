#include <stdio.h>

/**
 * main - Prints allpossible combinations of two digits
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;

for (j = 0; j < 10; j++)
{


for (i = j + 1; i < 10; i++)
{
if (i == j)
continue;
else
{
putchar(j + '0');
putchar(i + '0');

}

if (j == 8)
break;

else
putchar(',');
putchar(' ');

}


}

putchar('\n');


}
