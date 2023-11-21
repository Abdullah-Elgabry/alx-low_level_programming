#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - this func will search for the loop in linList
 *
 * @head: llist wiil be find
 *
 * Return: node address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s_pointer, *last_dtg;

	if (head == NULL)
		return (NULL);
	for (last_dtg = head->next; last_dtg != NULL; last_dtg = last_dtg->next)
	{
		if (last_dtg == last_dtg->next)
			return (last_dtg);
		for (s_pointer = head; s_pointer != last_dtg; s_pointer = s_pointer->next)
			if (s_pointer == last_dtg->next)
				return (last_dtg->next);
	}

	return (NULL);
}
