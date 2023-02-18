#include "function_pointers.h"

/**
 * int_index - function to a function that searches for an array element
 * @array: array to be checked
 * @size: number of elements in the array
 * @cmp: function that searches
 *
 * Return: 0 if false, something else otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}

	else
	{
		int i;

		if (array != NULL && cmp != NULL)
		{

			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}

		return (-1);
	}
}
