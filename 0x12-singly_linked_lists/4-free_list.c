#include "lists.h"

/**
 * free_list - this fun will free the n
 *
 * @head: ptr
 *
 * Return: this is void fun
 */

void free_list(list_t *head)
{
	list_t *n, *n_n;

	if (!head)
		return;

	n = head;
	while (n)
	{
		n_n = n->next;
		free(n->str);
		free(n);
		n = n_n;
	}
}
