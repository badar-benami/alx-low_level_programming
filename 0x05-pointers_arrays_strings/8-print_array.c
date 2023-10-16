#include "main.h"

/**
 * print_array-a function that prints n array items.
 * @a:array Name.
 * @n:is the number of array elements to be printed.
 * Return:a & n inputs.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
