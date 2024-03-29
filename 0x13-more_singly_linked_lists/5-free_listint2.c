#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the list
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
