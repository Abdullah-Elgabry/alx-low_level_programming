#include "hash_tables.h"

/**
 * hash_table_print - this func will prt # table
 *
 * @ht: # table will be printed
 *
 *
 * Return: this is void func
 *
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int xc;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (xc = 0; xc < ht->size; xc++)
	{
		tmp = ht->array[xc];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
