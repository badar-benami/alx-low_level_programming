#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end-method that extends a listint_t list by adding,
 * a new node at the end.
 * @head: pointer to the linked list's head pointer.
 * @n: data to be included in the list.
 *
 * Return: the new element's address, or NULL if it didn't work.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *traverse = *head; /* pointer to the first node */

	/* establish a new node */
	new_node = malloc(sizeof(listint_t));
	/* check if malloc has failed and return null */
	if (new_node == NULL)
		return (NULL);
	/* access the n field of the struct and initialize it with n */
	/* which has been passed to the function */
	new_node->n = n;
	/* since we are adding to the end of the list then the */
	/* next field should point to the end of the current list ie NULL */
	new_node->next = NULL;
	/* if the list is empty ie value at head is NULL */
	if (*head == NULL) /* derefrence to get first value */
	{
		*head = new_node; /* address of the new_node */
		return (new_node);
	}
	/* if the list is not empty traverse to the end of the list */
	while (traverse->next != NULL)
		traverse = traverse->next;
		/* loop exits once traverse->next == NULL ie at end of list */
	/* set the new_node as last node */
	traverse->next = new_node;
	return (new_node);
}
