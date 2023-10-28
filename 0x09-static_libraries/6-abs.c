#include "main.h"

/**
 * _abs---the method for calculating the absoute.
 *        worth of a whole number.
 * @n:accepts integre type input for the purpose of.
 *
 * Return: Always zero (Success).
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
