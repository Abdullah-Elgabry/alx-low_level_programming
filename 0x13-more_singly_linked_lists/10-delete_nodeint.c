#include "lists.h"

/**
 * delete_nodeint_at_index - this func will pop a new node at given index
 *
 * @head: the 1st node ptr.
 *
 * @index: node index.
 *
 * Return: 1 if it succeeded,
 * -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *_current_node, *past_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		_current_node = *head;
		*head = (*head)->next;
		free(_current_node);
		return (1);
	}
	_current_node = *head;
	while (_current_node)
	{
		if (i == index)
		{
			past_node->next = _current_node->next;
			free(_current_node);
			return (1);
		}
		i++;
		past_node = _current_node;
		_current_node = _current_node->next;
	}
	return (-1);
}
