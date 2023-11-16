#include <stdlib.h>
#include "lists.h"

/**
 * free_list --- releases a bound list.
 * @head: list_t list for release.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
