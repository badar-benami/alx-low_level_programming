#include "main.h"

/**
 * _isupper-capital letters.
 * @c: char to verify.
 *
 * Return: zero or one.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
