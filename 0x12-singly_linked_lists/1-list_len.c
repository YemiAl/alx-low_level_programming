#include "lists.h"

/**
 * list_len - program that returns the size of a list
 *
 * @h: pointer to the head of the list
 *
 * Return: size of the list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t len = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	return (len);
}
