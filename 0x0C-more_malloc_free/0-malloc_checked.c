#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked-----uses Malloc to allocate memory.
 * @b:number of bytes to be assigned.
 *
 * Return:a reference to the memory allotted.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
