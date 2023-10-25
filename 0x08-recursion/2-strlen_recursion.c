#include "main.h"

/**
 * _strlen_recursion-yields the string's length.
 * @s:string to determine how long.
 *
 * Return:how long the string is.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
