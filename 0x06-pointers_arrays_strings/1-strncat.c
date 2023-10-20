#include "main.h"
/**
 * _strncat---concatenate 2 strings.
 * using n bytes at most from source.
 * @dest:value input.
 * @src:value input.
 * @n:value input.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
