#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Program that outputs positive or negative
 *
 * Return: (is positive, is zero, is negative)
 */

int main(void)
{

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}

else if (n < 0)
{
printf("%i is negative\n", n);
}

else if
printf("%i is zero\n", n);
else
return (0);
}
