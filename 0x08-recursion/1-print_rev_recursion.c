#include "main.h"

/**
 * _print_rev_recursion-outputs a string backwards.
 * @s:to print a string.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
