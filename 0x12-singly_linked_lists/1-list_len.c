#include <stdlib.h>
#include "lists.h"

/**
 * list_len-yields the connected list's element count.
 * @h: the list_t list's pointer.
 *
 * Return: quantity of components in h.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
