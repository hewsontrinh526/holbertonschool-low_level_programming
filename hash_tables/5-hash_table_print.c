#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int j;

	i = 0;
	j = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (j == 1)
			{
				printf(", ");
			}
			j = 1;
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
