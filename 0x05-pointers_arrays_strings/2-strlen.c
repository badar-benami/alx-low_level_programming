#include "main.h"
/**
 * _strlen-returns a string's length.
 * @s:String.
 * Return:Length.
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
