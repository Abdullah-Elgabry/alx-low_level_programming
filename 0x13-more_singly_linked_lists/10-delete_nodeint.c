#include "lists.h"

/**
 * delete_nodeint_at_index - this func will pop a new node at given index
 *
 * @head: the 1st node ptr.
 *
 * @index: node index.
 *
 * Return:  Return: 1 on success,
 * -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *_node, *_nxt_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	_node = *head;
	if (index == 0)
	{
		*head = _node->_nxt_node;
		free(_node);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (_node->_nxt_node == NULL)
			return (-1);
		_node = _node->_nxt_node;
	}

	_nxt_node = _node->_nxt_node->_nxt_node;
	free(_node->_nxt_node);
	_node->_nxt_node = _nxt_node;

	return (1);
}
