#include "lists.h"

/**
 * listint_len -  this func will loop & return all values in listint_t
 *
 * @h: pointer of the node
 *
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
