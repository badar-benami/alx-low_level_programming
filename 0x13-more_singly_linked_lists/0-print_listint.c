#include "lists.h"
#include <stdio.h>

/**
 * print_listint --- function that outputs a listint_t list's whole contents.
 * @h: pointer to the linked list's head.
 *
 * Format: View an example.
 * You may make use of printf.
 *
 * Return: All the elements of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to head */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
