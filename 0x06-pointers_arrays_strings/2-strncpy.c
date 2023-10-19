#include "main.h"
/**
 * _strncpy - copy the text.
 * @dest: array which yields.
 * @src: the pointer that receive the text.
 * @n: moments to engage.
 *
 * Return: the dest parameter.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
