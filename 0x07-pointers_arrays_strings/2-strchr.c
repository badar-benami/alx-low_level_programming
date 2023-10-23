#include "main.h"
/**
 * _strchr-Entry point.
 * @s:Input.
 * @c:Input.
 * Return: Always ZERO (Success).
 */
char *_strchr(char *s, char c)
{
	int I = 0;

	for (; s[I] >= '\0'; I++)
	{
		if (s[I] == c)
			return (&s[I]);
	}
	return (0);
}
