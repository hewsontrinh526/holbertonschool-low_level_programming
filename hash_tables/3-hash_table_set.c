#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 *
 * @key: Key of the hash table
 * @value: Char to be added to hash table
 *
 * Return: The address of the new element, else NULL if failed
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Hash table you want to update or add to
 * @key: Key of the hash tables
 * @value: Char to be added to hash table
 *
 * Return: 1 if succesful, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	unsigned long int i;

	if (key == NULL || ht == NULL)
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);
	new_element = ht->array[i];

	while (new_element != NULL)
	{
		if (strcmp(new_element->key, key) == 0)
		{
			free(new_element->value);
			new_element->value = strdup(value);
			return (1);
		}
		new_element = new_element->next;
	}

	new_element = add_node(key, value);

	if (new_element == NULL)
	{
		return (0);
	}
	new_element->next = ht->array[i];
	ht->array[i] = new_element;
	return (1);
}
