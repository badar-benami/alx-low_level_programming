#include <stdlib.h>
#include "main.h"

/**
 * *_memset---allocates a constant byte to memory.
 * @s:memory space must be occupied.
 * @b:copy the char.
 * @n:nmbr of times to copy (b).
 *
 * Return:reference to the memory location (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc---RAM is set aside for an array.
 * @nmemb:how many items are in the array.
 * @size:each element's size.
 *
 * Return:reference to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
