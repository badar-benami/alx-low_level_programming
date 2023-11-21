#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - method that returns the total of all of a's data (n),
 * listint_t a list that is linked.
 * @head: A pointer to the linked list's head.
 *
 * Return:  sum of all the data (n) of a linked list or zero if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
