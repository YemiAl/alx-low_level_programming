#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to the head of the list
 *
 */

void free_list(list_t **head)
{
	list *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
