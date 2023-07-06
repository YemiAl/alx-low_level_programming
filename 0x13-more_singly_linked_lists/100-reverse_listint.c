#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: pointer to the head of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentnode, *nextnode;

	currentnode = nextnode = *head;
	*head = NULL;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = *head;
		*head = currentnode;
		currentnode = nextnode;
	}

	return (*head);
}
