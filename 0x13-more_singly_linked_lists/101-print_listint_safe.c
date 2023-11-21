#include "lists.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * _alloc - this fun will alloc the meamory.
 *
 * @_old_list: this is the past one.
 *
 * @_old_l: the _new _old_list
 *
 * @_new: this is the _new node.
 *
 * Return: ptr
 */

const listint_t **_alloc(const listint_t **_old_list,
size_t _old_l, const listint_t *_new)
{
	const listint_t **_new_list;
	size_t i;

	_new_list = malloc(_old_l * sizeof(listint_t *));
	if (_new_list == NULL)
	{
		free(_old_list);
		exit(98);
	}
	for (i = 0; i < _old_l - 1; i++)
		_new_list[i] = _old_list[i];
	_new_list[i] = _new;
	free(_old_list);
	return (_new_list);
}


/**
 * print_listint_safe - this func will pprint the Llist
 *
 * @head: ptr of the 1st node
 *
 * Return: nodes num.
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **_old_list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == _old_list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(_old_list);
				return (num);
			}
		}
		num++;
		_old_list = _alloc(_old_list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(_old_list);
	return (num);
}
