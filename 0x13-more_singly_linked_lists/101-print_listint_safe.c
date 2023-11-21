#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_listint_safe - this func will pprint the Llist
 *
 * @head: ptr of the 1st node
 *
 * Return: nodes number.
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t i, _number = 0;
	const listint_t **_old_list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < _number; i++)
		{
			if (head == _old_list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(_old_list);
				return (_number);
			}
		}
		_number++;
		_old_list = _allocte(_old_list, _number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(_old_list);
	return (_number);
}




/**
 * _allocte - this fun will alloc the meamory.
 *
 * @_old_list: this is the past one.
 *
 * @_old_list_size: the _new_node _old_list _old_list_size.
 *
 * @_new_node: this is the _new_node node.
 *
 * Return: ptr
 */

const listint_t **_allocte(const listint_t **_old_list, size_t _old_list_size, const listint_t *_new_node)
{
	const listint_t **_new_list;
	size_t i;

	_new_list = malloc(_old_list_size * sizeof(listint_t *));
	if (_new_list == NULL)
	{
		free(_old_list);
		exit(98);
	}
	for (i = 0; i < _old_list_size - 1; i++)
		_new_list[i] = _old_list[i];
	_new_list[i] = _new_node;
	free(_old_list);
	return (_new_list);
}
