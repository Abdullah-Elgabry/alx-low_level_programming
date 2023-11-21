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
	listint_t *curr_node = NULL, *nxt_node = NULL;

	if (!head || !*head)
		return (NULL);

	curr_node = *head;
	*head = NULL;
	while (curr_node)
	{
		nxt_node = curr_node->nxt_node;
		curr_node->nxt_node = *head;
		*head = curr_node;
		curr_node = nxt_node;
	}
	return (*head);
}
