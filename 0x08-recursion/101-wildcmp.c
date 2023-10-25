#include "main.h"
/**
 * wildcmp---compares two strings and returns one.
 * if the strings are thought to be the same,
 * otherwise return zero.
 * @s1:the typical string.
 * @s2:the unique string that includes
 *
 * Return: one if identical, else zero.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
