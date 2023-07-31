#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list
*
* @head: Head of the list
* @index: Node to be returned
*
* Return: Node required, else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i = i + 1;
	}
	return (current);
}
