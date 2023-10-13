#include "main.h"

/**
 * _isdigit-check if nmbrs are zero - 9.
 * @c:char to be checked.
 *
 * Return: zero or one.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
