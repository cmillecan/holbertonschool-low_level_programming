#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key cannot be an empty string
 * @value: value associated with the key
 * Return: 1 if succeeds, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *new_node;
	unsigned long int i;

	if (!key || !value || strlen(key) == 0 || !ht)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
