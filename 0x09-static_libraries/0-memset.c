#include "main.h"
/**
 * _memset---assign a particular value to a block of memory.
 * @s:initial memory address to be filled.
 * @b:the intended amount.
 * @n:nmbr of bytes to be changed.
 * Return:updated array with a new n-byte value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
