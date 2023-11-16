#include "lists.h"

/**
 * _getlen - this func will return the len of the str
 *
 * @st: str will be checked
 *
 * Return: len of the str
 *
 */


int _getlen(char *st)
{
	int j = 0;

	if (!st)
		return (0);
	while (*st++)
		j++;
	return (j);
}

/**
 * print_list - this func will print the L list
 *
 * @h: ptr
 *
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _getlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
