#include "main.h"

/**
 * _strcat--join two strings together.
 * @dest:char string to join with.
 * @src:char string.
 * Return:pointer to resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int d, c;

	for (d = 0; dest[d] != '\0'; d++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[d] = src[c];
		d++;
	}

	dest[d] = '\0';
	return (dest);
}
