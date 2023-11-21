#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that releases a list with a single link.
 * @head: pointer that points to the linked list's head.
 *
 * Verify that no memory leaks exist.
 * The function sets NULL for the head.
 *
 * Return: Not possible.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_variable;

	if (head == NULL)
		return; /* do not do anything */
	while (*head != NULL)
	{
		temp_variable =  *head;
		*head = (*head)->next;
		free(temp_variable);
	}
	/* *head = NULL; */ /* not needed */
}
