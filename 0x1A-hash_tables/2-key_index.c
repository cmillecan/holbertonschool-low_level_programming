#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index where the key/value is stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = (hash_djb2(key) % size);

	return (i);
}
