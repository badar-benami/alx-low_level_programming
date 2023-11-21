#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop-function that searches a linked list for the loop.
 * @head: function that looks for the loop in a linked list.
 *
 * Using arrays, free, or malloc is prohibited.
 * In your function, you can declare a maximum of two variables.
 *
 * Return: The address of the loop's starting node,
 * or NULL in the absence of a loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	/*Floyd's Cycle-Finding Algorithm Application */
	/*Define 2 node pointers that point to the head node: slow_ptr and fast_ptr*/
	listint_t *slow_ptr = head, *fast_ptr = head;
	/* If the list is empty or has only one node, return. NULL */
	if (head == NULL || head->next == NULL)
		return (NULL);
	/* Every iteration, slow_ptr ptr advances by one node */
	slow_ptr = slow_ptr->next;
	/* Every iteration, fast_ptr ptr advances by two nodes */
	fast_ptr = fast_ptr->next->next;
	/* Using the slow_ptr and fast_ptr pointers, look for a loop */
	while (fast_ptr && fast_ptr->next)
	{
		/**
		 * In the end, slow_ptr and fast_ptr come together at the same node, hence,
		 * showing that there is a loop in the linked list.
		 */
		if (slow_ptr == fast_ptr)
			break;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}
	/* If there is no loop, return NULL*/
	if (slow_ptr != fast_ptr)
		return (NULL);
	/*If a loop occurs,start slow_ptr from the head and fast_ptr from the meet .*/
	slow_ptr = head;
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	/* return slow_ptr */
	return (slow_ptr);
}
