#include "lists.h"
#include <stdlib.h>

/**
 * searcher - this func will seaech for a search_L in a linked list
 *
 * @head: this is the list will be search for
 *
 * Return: wiil return node add
 */



listint_t *searcher(listint_t *head)
{
	listint_t *bottom, *pointer;

	if (head == NULL)
		return (NULL);

	for (bottom = head->next; bottom != NULL; bottom = bottom->next)
	{
		if (bottom == bottom->next)
			return (bottom);
		for (pointer = head; pointer != bottom; pointer = pointer->next)
			if (pointer == bottom->next)
				return (bottom->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - this func will frees the Llist
 *
 * @h: list header
 *
 * Return: free nodes num
 */


size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *_n;
	size_t siz;
	int search_L = 1;

	if (h == NULL || *h == NULL)
		return (0);

	_n = searcher(*h);
	for (siz = 0; (*h != _n || search_L) && *h != NULL; *h = next)
	{
		siz++;
		next = (*h)->next;
		if (*h == _n && search_L)
		{
			if (_n == _n->next)
			{
				free(*h);
				break;
			}
			siz++;
			next = next->next;
			free((*h)->next);
			search_L = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (siz);
}
