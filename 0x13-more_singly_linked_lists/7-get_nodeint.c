#include "lists.h"

/**
 * get_nodeint_at_index - this fun will return num of node in LinList
 *
 * @head: first node ptr.
 *
 * @index: the node index
 *
 * Return: the nth node in listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *_nth_node;
	unsigned int i;

	for (_nth_node = head, i = 0; _nth_node && i < index; _nth_node = _nth_node->next, i++)
		;
	return (_nth_node);
}
