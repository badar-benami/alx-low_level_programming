#include "main.h"
/**
 * _strcmp - compares 2 strings.
 * @s1: input element.
 * @s2: input element.
 *
 * Return: zero if equal or b if is different.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
