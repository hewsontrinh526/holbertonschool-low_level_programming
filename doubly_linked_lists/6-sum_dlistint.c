#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* sum_dlistint - Returns the sum of all the data(n) in a doubly linked list.
*
* @head: Head of the list
*
* Return: Sum, else 0
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current; /* pointer to hold node value */
	int sum;

	current = head;
	sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum = sum + current->n; /* adds the current node value to sum */
		current = current->next; /* shifts to the next node */
	}
	return (sum);
}
