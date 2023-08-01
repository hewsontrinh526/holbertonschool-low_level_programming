#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * delete_dnodeint_at_index - Delete a new node at a given position
 *
 * @head: Head of the list
 * @index: Index of which to insert new node
 *
 * Return: A new list with deleted nodes gone, else NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevNode = *head;
	dlistint_t *nextNode = *head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (nextNode == NULL)
		{
			return (-1);
		}
		*head = nextNode->next;
		if (nextNode->next != NULL)
		{
			nextNode->next->prev = NULL;
		}
		free(nextNode);
		return (1);
	}
	while (i < index && nextNode != NULL)
	{
		nextNode = nextNode->next;
	}
	if (nextNode == NULL)
	{
		return (-1);
	}
	prevNode = nextNode->prev;
	prevNode->next = nextNode->next;
	if (nextNode->next != NULL)
	{
		nextNode->next->prev = prevNode;
	}
	free(nextNode);
	return (1);
}
