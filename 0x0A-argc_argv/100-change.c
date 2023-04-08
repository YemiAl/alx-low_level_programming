#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, x, result, count = 0;

	int money[] = {25, 10, 5, 2, 1};

	int total = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (total < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < 5; i++)
	{
		x = money[i];

		if (total >= x)
		{
			result = total / x; /*divide by the note*/
			count = count + result; /*update the count*/
			total = total - (result * x); /*cal the rem*/
		}
	}

	printf("%d\n", count);
	return (0);
}
