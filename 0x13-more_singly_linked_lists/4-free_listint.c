#include "lists.h"

/**
 * free_listint - this func will free list of nodes.
 *
 * @head: ptr of the head node.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *_temp_node;

	while (head)
	{
		_temp_node = head;
		head = head->next;
		free(_temp_node);
	}
}
