#include "lists.h"

/**
 * print_dlistint - this funcwill prt dllist
 *
 * @h: six of add
 *
 * Return: list siz
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t pl = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		pl++;
	}
	return (pl);
}
