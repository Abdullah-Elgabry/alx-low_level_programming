#include "lists.h"

/**
 * free_listint_safe - this func will frees a linkedList.
 *
 * @h: 1st node ptr.
 *
 * Return: list size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t siz = 0;
	int disc;
	listint_t *_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		disc = *h - (*h)->next;
		if (disc > 0)
		{
			_node = (*h)->next;
			free(*h);
			*h = _node;
			siz++;
		}
		else
		{
			free(*h);
			*h = NULL;
			siz++;
			break;
		}
	}

	*h = NULL;

	return (siz);
}
