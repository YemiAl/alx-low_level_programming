#include "function_pointers.h"

/**
 * array_iterator: function pointer that also takes an array as an argument
 * @array: array to be actioned on
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
