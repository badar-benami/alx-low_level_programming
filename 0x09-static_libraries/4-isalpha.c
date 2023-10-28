#include "main.h"

/**
 * _isalpha---checks if char is a letter.
 *          both capital and lowercase.
 *
 * @c:accepts input from other functions.
 *
 * Return:one is c if true else zero.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
