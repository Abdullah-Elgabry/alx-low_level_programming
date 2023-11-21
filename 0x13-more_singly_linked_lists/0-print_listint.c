#include "lists.h"

/**
 * print_listint - this func will loop & prints all in listint_t
 *
 * @h: pointer of the node
 *
 * Return: list size
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
