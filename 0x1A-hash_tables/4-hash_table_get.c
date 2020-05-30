#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value, or NULL if the key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
