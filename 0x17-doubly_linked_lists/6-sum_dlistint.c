#include "lists.h"

/**
 * sum_dlistint - this func will + vals
 *
 * @head: post addr
 *
 * Return: the vsl result
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
