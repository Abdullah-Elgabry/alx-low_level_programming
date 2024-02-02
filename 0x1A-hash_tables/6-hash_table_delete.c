#include "hash_tables.h"

/**
 * hash_table_delete - this func just drop the # table
 *
 * @ht: the targeted # table
 *
 * Return: this is void func
 *
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int lm;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (lm = 0; lm < ht->size; lm++)
	{
		while (ht->array[lm] != NULL)
		{
			next = ht->array[lm]->next;
			free(ht->array[lm]->key);
			free(ht->array[lm]->value);
			free(ht->array[lm]);
			ht->array[lm] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
