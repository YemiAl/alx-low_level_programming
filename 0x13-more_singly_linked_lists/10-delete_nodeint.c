#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at an index
 *
 * @head: pointer to the headof the node
 * @index: node index to be deleted
 *
 * Return: 1 if successful and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	temp = *head;

	if (index != 0)
	{
		while (i != index)
		{
			if (temp == NULL)
				return (-1);

			temp2 = temp;
			temp = temp->next;
			i++;
		}
	}

	if (index == 0)
	{
		temp2 = (*head)->next;
		free (*head);
		*head = temp2;
		return (1);
	}

	temp2->next = temp->next;

	free(temp);

	return (1);
}
