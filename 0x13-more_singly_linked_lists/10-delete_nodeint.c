#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index-function for removing the node at index,
 * A listint_t linked list's index.
 * @head: pointer to pointer to the linked list's beginning.
 * @index:The index of the node to be destroyed. The index begins at zero.
 *
 * Return:  If it succeeds, it returns a 1, otherwise it returns a -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_variable, *temp_variable2;
	unsigned int i = 0;
	/* if there is no list then return NULL */
	if (head == NULL || *head == NULL)
		return (-1);
	/* check for index 0 */
	if (index == 0)
	{
		temp_variable = *head;
		*head = (*head)->next;
		free(temp_variable);
		return (1);
	}
	/* Make the temporary variable the first node. */
	temp_variable = *head;
	/* traverse the list till the index */
	while (i != index - 1 && temp_variable->next != NULL)
	{
		temp_variable = temp_variable->next;
		i++;
	}
	if (i == index - 1 && temp_variable->next != NULL)
	{
		temp_variable2 = temp_variable->next;
		temp_variable->next = temp_variable2->next;
		free(temp_variable2);
		return (1);
	} /* Because the code has failed by this point, we return -1 */
	return (-1);
}
