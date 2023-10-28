#include "main.h"
/**
 * _memset---assign a particular value to a block of memory.
 * @s:initial memory address to be filled.
 * @b:the intended amount.
 * @n:nmbr of bytes to be changed.
 *
 * Return:changed array with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
