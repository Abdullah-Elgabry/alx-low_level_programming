#include "lists.h"

/**
 * free_listint2 - this func will frees list_int & set head->Null
 *
 * @head: ptr of the 1st node.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *_temp_node;

	if (!head)
		return;

	while (*head != NULL)
	{
		_temp_node = *head;
		*head = (*head)->next;
		free(_temp_node);
	}
}
