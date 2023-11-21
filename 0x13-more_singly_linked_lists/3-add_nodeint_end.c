#include "lists.h"

/**
 * add_nodeint_end - this func will add a new node at the end
 *
 * @head: ptr of the first node
 *
 * @n: this is the val of the node
 *
 * Return: ptr to the _new ndoe will added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new = malloc(sizeof(listint_t));
	listint_t *_node;

	if (!head || !_new)
		return (NULL);

	_new->next = NULL;
	_new->n = n;
	if (!*head)
		*head = _new;
	else
	{
		_node = *head;
		while (_node->next)
			_node = _node->next;
		_node->next = _new;
	}
	return (_new);
}
