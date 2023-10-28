#include "main.h"

/**
 *_strlen-yields the string's length.
 * @s:string.
 * Return:i.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
