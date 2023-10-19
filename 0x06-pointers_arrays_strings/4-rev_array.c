#include "main.h"

/**
 * reverse_array - reverse the values in an integer array.
 * @a:array of integers.
 * @n:nmbr of elements in array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
