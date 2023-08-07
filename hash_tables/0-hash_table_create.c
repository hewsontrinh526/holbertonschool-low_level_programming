#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_create - Creates a hash table
 *
 * @size: Size of the array
 *
 * Return: A pointer to a newly created has table, else NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	table = malloc(sizeof(*table));

	if (table == NULL)
	{
		return (NULL);
	}

	table->array = malloc(sizeof(*(table->array)) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i = i + 1;
	}
	table->array = size;
	return (0);
}
