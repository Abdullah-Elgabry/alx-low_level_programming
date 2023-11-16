#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_node_end - this func will add nodes at the end
 *
 * @head: this is the address
 *
 * @str: string of the node
 *
 * Return: zero
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int j, _c = 0;
	list_t *_n_node;
	list_t *store;

	_n_node = malloc(sizeof(list_t));
	if (_n_node == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		_c++;

	_n_node->len = j;
	_n_node->str = strdup(str);
	_n_node->next = NULL;

	if (*head == NULL)
	{
		*head = _n_node;
		return (_n_node);
	}

	store = *head;

	while (store->next != NULL)
		store = store->next;

	store->next = _n_node;

	return (_n_node);
}
