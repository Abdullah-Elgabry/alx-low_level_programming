#include "lists.h"

/**
 * add_nodeint - this func will add a new node aat the beggining
 * @head: ptr of the first node
 *
 * @n: this is the val of the node
 *
 *
 * Return: ptr to the _new ndoe will added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new = malloc(sizeof(listint_t));

	if (!head || !_new)
		return (NULL);

	_new->next = NULL;
	_new->n = n;
	if (*head)
		_new->next = *head;
	*head = _new;
	return (_new);
}
