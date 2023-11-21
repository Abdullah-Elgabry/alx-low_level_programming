#include "lists.h"

/**
 * get_nodeint_at_index - this fun will return num of node in LinList
 *
 * @head: first node ptr.
 *
 * @index: the node index
 *
 * Return: the nth node in listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
