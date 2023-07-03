#include "lists.h"

/**
 * add_node - function that adds a node at the beginning of a list
 * @head: pointer to the head of a node
 * @str: value to be added
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t)); /* create new mem for struct */

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;
	*head = new;
	return (new);
}
