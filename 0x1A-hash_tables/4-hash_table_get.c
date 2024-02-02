#include "hash_tables.h"

/**
 * hash_table_get - this will return key val.
 *
 * @ht: the place will get the data.
 *
 * @key: this is the val key
 *
 * Return: null | will ret the key val
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indct;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	indct = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[indct];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
