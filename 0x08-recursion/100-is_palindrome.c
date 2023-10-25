#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome-finds out whether a string is a palindrome.
 * @s:reverse the string.
 *
 * Return:one if it is, zero it's not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion---yields the string's length.
 * @s:string to determine how long.
 *
 * Return:how long the string is.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal-looks for palindromes in the characters recursively.
 * @s:string to verify.
 * @i:Iterator.
 * @len:how long the string is.
 *
 * Return: one if palindrome, zero if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
