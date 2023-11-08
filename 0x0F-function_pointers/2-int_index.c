#include "function_pointers.h"

/**
 * int_index - looks for an integer.
 * @array: Input array of integers.
 * @size: The array's size.
 * @cmp: a pointer to the function that will be used
 * to contrast numbers.
 *
 * Return: the initial element's index for which the cmp
 * function doesn't yield a zero. Should no element match,
 * yield -1. Return -1 if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
