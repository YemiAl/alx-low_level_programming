#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts node at index
 *
 * @head: pointer to the head of the node
 * @idx: index where node is to be inserted
 * @n: value at the node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;

	while (i != (idx - 1))
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}

	new->next = temp->next; /*replace the add with the add of new node*/
	temp->next = new;

	return (new);
}
