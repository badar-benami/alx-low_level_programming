#include "main.h"
/**
 *_memset-assign a particular value to a block of memory.
 *@s:initial memory address to be filled.
 *@b:the intended amount.
 *@n:number of bytes to be modified.
 *
 *Return: updated array with a new n-byte value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int I = 0;

	for (; n > 0; I++)
	{
		s[I] = b;
		n--;
	}
	return (s);
}
