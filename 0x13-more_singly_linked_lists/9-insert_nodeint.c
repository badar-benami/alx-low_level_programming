#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index-a method that adds a new node at,
 * a certain position.
 * @head: pointer to pointer to the linked list's beginning.
 * @idx: The index of the list into which the new node should be inserted.
 * @n: The new node's value.
 *
 * If adding the new node at index idx is not possible,
 * do not add the new node and return NULL.
 *
 * Return:  the new node's address, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *traverse;
	unsigned int i = 0;
	/* if there is no list return null */
	if (head == NULL)
		return (NULL);
	/* build a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* access the new_node's n variable and initialize it as n */
	new_node->n = n;
	/* check if idx = 0 */
	if (idx == 0)
	{
		/* Go to the next new_node field and designate it as the primary node */
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* make traverse the value at the top */
	traverse = *head;
	while (i != idx - 1 && traverse != NULL)
	{
		traverse = traverse->next;
		i++;
	}

	if (i == idx - 1 && traverse != NULL)
	{
		new_node->next = traverse->next;
		traverse->next = new_node;
		return (new_node);
	}
	return (NULL);
}
