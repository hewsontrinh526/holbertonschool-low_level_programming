#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: Hash table
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}

	i = 0;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
