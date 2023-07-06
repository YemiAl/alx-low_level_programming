#include "lists.h"

/**
 * pop_listint - function that pops the head of a list
 * @head: pointer to the head of a list
 *
 * Return: value at the head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;

	value = temp->n;
	free(temp);

	return (value);
}
