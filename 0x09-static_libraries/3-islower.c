#include "main.h"

/**
 * _islower-function to determine if a character is lowercase.
 *
 * @c:checks input of function.
 * n
 * Return:returns one if 'c' is lowercase
 *        Alternatively, always.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
