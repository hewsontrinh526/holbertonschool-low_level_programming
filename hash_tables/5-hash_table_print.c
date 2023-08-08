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

	if (ht == NULL) /* Checks whether hash table is empty or not */
	{
		return;
	}
	printf("{");
	while (i < ht->size) /* Iterates through until reaches specified size */
	{
		current = ht->array[i];
		while (current != NULL) /* Iterates through to end of array */
		{
			if (j == 1) /* Statement to print a comma */
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
