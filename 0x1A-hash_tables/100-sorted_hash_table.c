#include "hash_tables.h"

/**
 * shash_table_create - cthis func will generate # table.
 *
 * @size: this is the size
 *
 * Return: null | the new table ptr
 *
 */


shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_tb;
	unsigned long int fx;

	hash_tb = malloc(sizeof(shash_table_t));
	if (hash_tb == NULL)
		return (NULL);
	hash_tb->size = size;
	hash_tb->shead = NULL;
	hash_tb->stail = NULL;
	hash_tb->array = malloc(sizeof(shash_node_t) * size);
	if (hash_tb->array == NULL)
	{
		free(hash_tb);
		return (NULL);
	}
	for (fx = 0; fx < size; fx++)
	{
		hash_tb->array[fx] = NULL;
	}
	return (hash_tb);
}

/**
 * make_shash_node - # table nde maker.
 *
 * @key: the key indecator
 *
 * @value: the db
 *
 *
 * Return: null | the new table ptr
 */


shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *ht_mk;

	ht_mk = malloc(sizeof(shash_node_t));
	if (ht_mk == NULL)
		return (NULL);
	ht_mk->key = strdup(key);
	if (ht_mk->key == NULL)
	{
		free(ht_mk);
		return (NULL);
	}
	ht_mk->value = strdup(value);
	if (ht_mk->value == NULL)
	{
		free(ht_mk->key);
		free(ht_mk);
		return (NULL);
	}
	ht_mk->next = ht_mk->snext = ht_mk->sprev = NULL;
	return (ht_mk);
}

/**
 * add_to_sorted_list - node adder
 *
 * @table: # table db
 *
 * @node: targeted nde
 *
 *
 * Return: this is void func
 *
 */

void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - # table val setter.
 *
 * @ht: table db.
 *
 * @key: targeted nde.
 *
 * @value: targeted inf.
 *
 * Return: 0 | 1 .
 */



int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int th_lkp;
	char *new_value;
	shash_node_t *ht_mk, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	th_lkp = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[th_lkp];
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
	ht_mk = make_shash_node(key, value);
	if (ht_mk == NULL)
		return (0);
	ht_mk->next = ht->array[th_lkp];
	ht->array[th_lkp] = ht_mk;
	add_to_sorted_list(ht, ht_mk);
	return (1);
}

/**
 * shash_table_get - # table val getter
 *
 * @ht: table db.
 *
 * @key: this is the # table key.
 *
 * Return: null | # val
 *
 */




char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int th_lkp;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	th_lkp = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[th_lkp];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - this will prt # table.
 *
 * @ht: targeted table.
 *
 *
 * Return: this is void func.
 *
 */



void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char ind = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (ind == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		ind = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - this will rev the # table.
 *
 * @ht: targeted table.
 *
 * Return: this is void func.
 *
 */


void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char ind = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (ind == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		ind = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - this will just drop # table.
 *
 * @ht: targeted # table.
 *
 * Return: this is void func.
 *
 */



void shash_table_delete(shash_table_t *ht)
{
	unsigned long int fx;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (fx = 0; fx < ht->size; fx++)
	{
		while (ht->array[fx] != NULL)
		{
			next = ht->array[fx]->next;
			free(ht->array[fx]->key);
			free(ht->array[fx]->value);
			free(ht->array[fx]);
			ht->array[fx] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
