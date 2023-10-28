#include "main.h"

/**
 * char *_strcpy---a method that duplicates the string that src points to.
 * @dest:Copy to.
 * @src:Copy from.
 * Return:String.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
