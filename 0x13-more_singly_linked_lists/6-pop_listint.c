#include "lists.h"

/**
 * pop_listint -  deletes the 1st node of a listint_t.
 *
 * @head: ptr of 1st node address.
 *
 * Return: value of deleted node.
 */

int pop_listint(listint_t **head)
{
	listint_t *_temp_node;
	int n;

	if (!head || !*head)
		return (0);
	_temp_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = _temp_node;
	return (n);
}
