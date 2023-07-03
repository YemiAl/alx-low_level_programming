#include "lists.h"

/**
 * print_list - function that prints a list_t list
 *
 * @h: pointer to the head of the list
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;

	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}

		count++;
		temp = temp->next;
	}

	return (count);
}
