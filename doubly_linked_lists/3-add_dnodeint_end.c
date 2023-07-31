#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 *
 * @head: Head of the list
 * @n: Input integer
 *
 * Return: The address of the new element, else NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewEnd;
	dlistint_t *Current;

	if (head != NULL)
	{
		Current = malloc(sizeof(*Current));
		if (Current == NULL)
		{
			return (0);
		}
		Current->n = n;
		Current->next = NULL;
		Current->prev = *head;
		if (*head == NULL)
		{
			*head = Current;
		}
		else
		{
			NewEnd = *head;
			while (NewEnd->next != NULL)
			{
				NewEnd = NewEnd->next;
			}
			NewEnd->next = Current;
		}
		return (Current);
	}
	return (NULL);
}
