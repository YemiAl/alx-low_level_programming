#include "lists.h"

/**
 * sum_listint - function that adds the values in a list
 *
 * @head: pointer to the head of the node
 *
 * Return: sum of the values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
