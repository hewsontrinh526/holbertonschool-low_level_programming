#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: Hash table
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	if (ht->array == NULL)
	{
		free(ht);
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
			free(temp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
