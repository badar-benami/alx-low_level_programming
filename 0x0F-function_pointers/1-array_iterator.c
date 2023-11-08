#include "function_pointers.h"

/**
 * array_iterator - A func pointer is used to map an array.
 * parameter on each array element.
 * @array: input integer array.
 * @size: the array size.
 * @action: Function pointer.
 *
 * Return: No return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
