#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 *
 * @head: Head of the list
 * @str: Input string
 *
 * Return: The address of the new element, else NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewStart;

	if (head != NULL && n != '\0')
	{
		NewStart = malloc(sizeof(*NewStart));
		if (NewStart == NULL)
		{
			return (0);
		}
		NewStart->n = n;
		NewStart->next = *head;
		NewStart->prev = NULL;
		*head = NewStart;
		return (NewStart);
	}
	return (NULL);
}
