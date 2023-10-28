#include "main.h"

/**
 * _isupper---check if c is upper.
 *
 * @c:input for alphabet.
 *
 * Return: one if its uppercase, zero if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
