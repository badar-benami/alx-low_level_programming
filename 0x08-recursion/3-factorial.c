#include "main.h"

/**
 * factorial-yields the number's factorial.
 * @n:number from which to retrieve the factorial.
 *
 * Return:n's factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
