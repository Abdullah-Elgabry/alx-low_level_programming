#include "lists.h"

/**
 * dlistint_len - this func will ret list lenght
 *
 * @h: node*
 *
 * Return: list siz
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t pl = 0;

	while (h)
	{
		h = h->next;
		pl++;
	}
	return (pl);
}
