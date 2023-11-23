#include "main.h"

/**
 * clear_bit--sets the value of a given bit to zero.
 * @n:pointer to the numbr to change.
 * @index:the bit to clear's index.
 *
 * Return:One for achievement,one for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
