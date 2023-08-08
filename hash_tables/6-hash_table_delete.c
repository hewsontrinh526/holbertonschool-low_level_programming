#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

	i = 0;

	if (ht == NULL)
	{
		return;
	}
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			if (temp->key != NULL)
			{
				free(temp->key);
			}
			free(temp->value);
			free(temp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
