#include "main.h"

/**
 * _isdigit---checks if input is digit between zero - 9.
 *
 * @c:Input.
 *
 * Return:one if is digit, zero if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
