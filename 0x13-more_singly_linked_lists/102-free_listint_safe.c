#include "lists.h"

/**
 * free_listint_safe - this func will frees a linkedList.
 *
 * @h: 1st node ptr.
 *
 * Return: list size.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *_node = *h;

	if (h == NULL)
		exit(98);

	while (_node != NULL)
	{
		*h = _node->next;
		free(_node);
		_node = *h;
		i++;
		if (_node <= *h)
		{
			free(_node);
			break;
		}
	}
	*h = NULL;
	return (i);
}
