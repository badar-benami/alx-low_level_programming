#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that releases a list with a single link.
 * @head: pointer to the linked list's head.
 *
 * Unlike the last job, recursion will be used here.
 * Verify that no memory leaks exist.
 *
 * Return: No comeback.
 */

void free_listint(listint_t *head)
{
	/* go to the end of the list then start freeing from there */

	/* we have reached the end of the list */
	if (head == NULL)
		return;
	/* free everything else */
	free_listint(head->next);
	/* then free head */
	free(head);
	/* elegante, eh? muy bien. 👏*/
}
