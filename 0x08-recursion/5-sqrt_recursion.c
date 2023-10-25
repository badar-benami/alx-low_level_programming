#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion-yields a number's natural square root.
 * @n:the integer used to get the square root of.
 *
 * Return:hence, the square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion-searches for the natural.
 * square of a numerical value.
 * @n:number to compute the sqaure root of.
 * @i:Iterator.
 *
 * Return:hence, the square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
