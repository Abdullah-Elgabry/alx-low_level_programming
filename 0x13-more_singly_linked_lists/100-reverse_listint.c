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
	listint_t *next = NULL;
	listint_t *_past_node = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = _past_node;
		_past_node = *head;
		*head = next;
	}
	*head = _past_node;
	return (*head);
}
