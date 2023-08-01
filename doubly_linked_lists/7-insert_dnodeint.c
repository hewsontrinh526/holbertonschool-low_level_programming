#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 *
 * @h: Head of the list
 * @idx: Index of which to insert new node
 * @n: Integer to insert
 *
 * Return: A new list with insert nodes, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *previous;
	dlistint_t *NewNode;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i < idx - 1)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i = i + 1;
	}
	previous = current->next;
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	NewNode = malloc(sizeof(*NewNode));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	current->next = NewNode;
	previous->prev = NewNode;
	NewNode->prev = current;
	NewNode->next = previous;
	return (NewNode);
}
