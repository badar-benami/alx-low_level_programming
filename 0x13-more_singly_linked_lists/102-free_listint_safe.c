#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe-function for freeing up a listint_t.
 * @h: pointer that points to the linked list's head.
 *
 * Lists can be freed using a loop by this function.
 * You should only review the list once.
 * The function sets NULL for the head.
 *
 * Return: the amount of the freed list, if none other than zero.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listnode_t *nodes = NULL; /* retains the node's address */
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* even though you haven't come across a loop */
	while (!is_in_nodes(nodes, *h))
	{
		/* Verify if the malloc fails, then click End */
		if (!add_nodeptr(&nodes, *h))
		{
			free_listnode(nodes);
			exit(98);
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		/* print the value of field n and the address of the active node */
		/* print the value of field n and the address of the active node */
		/* printf("[%p] %d\n", (void *)head, head->n); */
		/* number the nodes */
		count++;
	}
	/* if you encounter a loop */
	if (*h != NULL)
		*h = NULL;

	/* print the beginning of the loop */
	/*	printf("-> [%p] %d\n", (void *)head, head->n); */
	free_listnode(nodes);
	/* return the node count */
	return (count);
}
