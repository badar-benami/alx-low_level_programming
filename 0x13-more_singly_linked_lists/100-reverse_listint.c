#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint---function for listint_t linked lists that reverses them.
 * @head: pointer that points to the linked list's head.
 *
 * It is prohibited for you to use more than one loop.
 * Using arrays, free, or malloc is prohibited.
 * In your function, you can declare a maximum of two variables.
 *
 * There shouldn't be any leaks of memory.
 *
 * Return:  the index of the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	/*variable to monitor the head's current state */
	listint_t *current = *head;

	/* If there isn't a list or a pointer to the top of the list */
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	/* Verify whether the following current field is null */
	if (current->next == NULL)
	{
		/* create a current pointer to the head and then return it */
		*head = current;
		return (*head);
	}
	/* If we have a pointer to the first node and the next pointer field */
	/* to first node */
	else if (*head && (*head)->next)
	{
		/* Make a temporary variable and designate it as the primary node */
		listint_t *temp_variable = *head;
		/* access the next field */
		*head = (*head)->next;
		/* reverse it recursively */
		reverse_listint(head);
		/* read the data at temp_variable->next's memory address */
		/* points to and set it as current */
		temp_variable->next->next = current;
		/* access the next temp_variable field and set it to NULL */
		temp_variable->next = NULL;
	}
	/* return the pointer to the first node */
	return (*head);
}
