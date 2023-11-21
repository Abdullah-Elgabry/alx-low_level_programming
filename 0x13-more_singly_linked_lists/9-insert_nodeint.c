#include "lists.h"

/**
 * insert_nodeint_at_index - this func will push a new node at given index
 *
 * @head: the 1st node ptr.
 *
 * @idx: node index.
 *
 * @n: int will be added/push to node
 *
 * Return: 0 -> null
 * node address if found.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *_new = malloc(sizeof(listint_t));
	listint_t *_temp_node = *head;
	unsigned int n = 0;

	if (_new == NULL)
		return (NULL);
	_new->n = n;
	if (idx == 0)
	{
		_new->next = *head;
		*head = _new;
		return (_new);
	}
	while (_temp_node != NULL)
	{
		if (n == idx - 1)
		{
			_new->next = _temp_node->next;
			_temp_node->next = _new;
			return (_new);
		}
		_temp_node = _temp_node->next;
		n++;
	}
	return (NULL);
}
