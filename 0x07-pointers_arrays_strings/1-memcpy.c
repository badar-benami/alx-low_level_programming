#include "main.h"
/**
 *_memcpy-a method for copying a memory region.
 *@dest:where it is kept in memory.
 *@src:memory from which it is copied.
 *@n:number of bytes.
 *
 *Return:updated memory copy with n bytes added.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int I = n;

	for (; r < I; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
