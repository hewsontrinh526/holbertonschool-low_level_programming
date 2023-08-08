#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * key_index - Gives an index of a key
 *
 * @key: Key of the hash tables
 * @size: Size of the array
 *
 * Return: The index at which the key/value pair shoud be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int i;

	if (key == NULL)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}

	hash = hash_djb2(key);
	i = hash % size;
	return (i);
}
