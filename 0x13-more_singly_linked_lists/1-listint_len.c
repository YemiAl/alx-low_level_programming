#include "lists.h"

/**
 * listint_len - program that returns the length
 *
 * @h:pointer to the head of a list
 *
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp;

	temp = h;

	while (temp)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
