#include <stdio.h>
#include "lists.h"

/**
 * print_list --- prints a linked list's whole contents.
 * @h: reference to the list to be printed, list_t.
 *
 * Return: the quantity of printed nodes.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
