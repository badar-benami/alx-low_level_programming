#include "main.h"
/**
 * _memcpy-a method for copying a memory region.
 * @dest:where it is kept in memory.
 * @src:memory location of copying.
 * @n:nmbr of bytes.
 *
 * Return:memory copy with n bytes altered.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}