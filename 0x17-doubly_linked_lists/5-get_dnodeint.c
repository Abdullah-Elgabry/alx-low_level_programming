#include "lists.h"

/**
 * get_dnodeint_at_index - this func will give at the known addr
 *
 * @head: pos addr
 * @index: givn nde
 *
 * Return: nde addr
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pl = 0;

	while (head)
	{
		if (pl == index)
			return (head);
		head = head->next;
		pl++;
	}
	return (NULL);
}
