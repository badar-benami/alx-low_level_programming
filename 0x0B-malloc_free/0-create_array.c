#include "main.h"
#include <stdlib.h>

/**
 * create_array-Make an array of chars and fill it with a specific char.
 * @size:Size of array.
 * @c:Specific char.
 * Return:char pointer to malloc'd memory address,or NULL if an error occurred.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
