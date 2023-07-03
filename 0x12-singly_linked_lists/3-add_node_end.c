#include "lists.h"

/**
 * add_node_end - function that adds node at the end of list
 * @head: pointer to the head of the node
 * @str: value to be added
 *
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	temp = *head;

	if (*head == NULL) /* if its an empty list */
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
	return (new);
}
