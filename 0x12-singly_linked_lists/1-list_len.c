#include "lists.h"

/**
 * list_len - L list len
 *
 * @h: ptr
 *
 * Return: the list size
 *
 */

size_t list_len(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		h = h->next;
		sz++;
	}
	return (sz);
}
