#include <stdio.h>

int main(void)
{
    int i = 3;

    unsigned int x = 1, y = 2, sum;

    printf("%u, %u, ", x, y);

    while (i <= 50)
    {
        sum = x + y;

        printf("%u", sum);

        if (i != 50)
        {
            putchar(',');
            putchar(' ');
        }

        x = y;

        y = sum;

        i++;
    }
    putchar('\n');
}
