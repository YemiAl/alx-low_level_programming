#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (list == NULL)
	{
		return (0);
	}

	slow = list;
	fast = list->next;

	while ((fast != NULL) && (fast->next != NULL))
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
