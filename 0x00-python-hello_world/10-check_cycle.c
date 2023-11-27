#include "lists.h"

/**
 * chek cycle - checks if a list has a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (!list || !list->next)
		return (0);
	fast = list;
	slow = list;

	while(slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if(slow == fast)
		{
			return (0);
		}
	}
	return (0);

}
