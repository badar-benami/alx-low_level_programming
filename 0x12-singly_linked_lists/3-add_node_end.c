#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -adds a new node to a linked list at its conclusion.
 * @head: reference to the list_t list doubled.
 * @str: text must be entered into the new node.
 *
 * Return: the new element's address, or NULL if it didn't work.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
