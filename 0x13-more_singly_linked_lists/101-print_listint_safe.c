#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @head: pointer to the list
 *
 * Return: Number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
        const listint_t *temp;
        size_t i = 0;

        temp = h;

	if (head == NULL)
		exit (98);

        while (temp != NULL)
        {
                printf("%d\n", temp->n);
                i++;
                temp = temp->next;
        }

        return (i);
}

