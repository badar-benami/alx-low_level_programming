#include "main.h"

/**
 * _isalpha---checks for alphabetic char.
 * @c:the char to be checked.
 * Return:one if c is a letter, zero otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
