#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -a function that returns the nth node in a graph,
 * listint_t connected list.
 * @head: A pointer to the linked list's head.
 * @index: the node's index, starting at 0.
 *
 * Make certain that there are no memory leaks.
 *
 * Return: Make certain that there are no memory leaks.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i  = 0;

    /* if there is no list return NULL */
	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
