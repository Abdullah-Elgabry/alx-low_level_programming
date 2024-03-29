#include "hash_tables.h"

/**
 * make_hash_node - this func will generate node for the # table
 *
 * @key: *node key
 * @value: node val
 *
 * Return: null | new node
 *
 */

hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}


/**
 * hash_table_set - the key setter
 *
 * @ht: this the thr ad
 *
 * @key: this is the data indec
 *
 * @value: data to store
 *
 * Return: 0 | 1
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indct;
	hash_node_t *hash_node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	indct = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[indct];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[indct];
	ht->array[indct] = hash_node;
	return (1);
}
