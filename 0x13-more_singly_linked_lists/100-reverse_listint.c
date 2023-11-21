#include "lists.h"

/**
 * reverse_listint - this func will reverses a listint_t.
 *
 * @head: 1st curr_node addrees (ptr).
 *
 * Return: head address.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *_past_node = NULL;
	listint_t *_nxt_node = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		_nxt_node = (*head)->_nxt_node;
		(*head)->_nxt_node = _past_node;
		_past_node = *head;
		*head = _nxt_node;
	}
	*head = _past_node;
	return (*head);
}
