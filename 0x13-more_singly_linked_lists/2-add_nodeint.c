#include "lists.h"
/**
 * add_nodeint - function that adds a node at the beginning of a list
 * @head: head of the list
 * @n: node to be added
 *
 * Return: pointer to the address of the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
