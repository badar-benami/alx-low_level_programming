#include "lists.h"
#include <stdio.h>

/**
 * listint_len---method that yields the linked list's element count,
 * in an int_t list.
 * @h: A pointer to the linked list's head.
 *
 * Format: Take a look at this example.
 * You are permitted to use printf.
 *
 * Return: quantity of components.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
