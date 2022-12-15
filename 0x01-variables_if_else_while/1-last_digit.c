#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - function that prints the last digit
 *
 * Return: (greater than 5, is zero, less than 6 and not zero)
 */

int main(void)

{

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

int m;

m = n % 10;

if (m > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, m);

else if (m == 0)
printf("Last digit of %i is %i and is 0\n", n, m);

else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);

return (0);
}
