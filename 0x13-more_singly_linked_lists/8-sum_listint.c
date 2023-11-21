#include "lists.h"

/**
 * sum_listint - this func will return the sum of val in listin_t.
 *
 * @head: 1st node ptr.
 * Return: s
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
