#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get - Retrives a value associated with a key
 *
 * @key: Key of the hash table
 * @ht: Hash table
 *
 * Return: The value associated with the element, or NULL if key cdnt be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);

	while (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		ht->array[i] = ht->array[i]->next;
	}
	return (NULL);
}
