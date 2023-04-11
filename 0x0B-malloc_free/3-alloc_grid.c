#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - program that points to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a double pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **dptr;

	if ((height <= 0) || (width <= 0))
	{
		return (0);
	}
	dptr = malloc(height * sizeof(int *));

	if (dptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			dptr[i] = malloc(width * sizeof(int));
			if (dptr[i] == NULL)
			{
				while (i > 0)
				{
					free(dptr[i]);
					i--;
				}

				free(dptr);
				return (NULL);
			}
			else
			{
				for (j = 0; j < width; j++)
				{
					dptr[i][j] = 0;
				}
			}
		}
		return (dptr);
	}
}
