#include "lists.h"

/**
 * print_listint_safe -  this func prints a linkedlist
 *
 * @head: 1st node ptr
 *
 * Return: nodes num in Llist
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t s = 0;
	const listint_t *_tent_n = head;

	while (_tent_n != NULL)
	{
		printf("[%p] %d\n", (void *)_tent_n, _tent_n->n);
		_tent_n = _tent_n->next;
		s++;
	}
	return (s);
}
