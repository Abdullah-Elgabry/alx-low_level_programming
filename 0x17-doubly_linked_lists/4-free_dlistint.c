#include "lists.h"

/**
 * free_dlistint - this func will freeees the list
 *
 * @head: nw nde ptr
 *
 * Return: n/a because it's a void func
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
