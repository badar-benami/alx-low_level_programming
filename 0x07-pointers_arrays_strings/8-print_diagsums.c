#include "main.h"
#include <stdio.h>
/**
 * print_diagsums---Point of entry.
 * @a:Input.
 * @size:Input.
 * Return: Always ZERO (Success).
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, P;

	sum1 = 0;
	sum2 = 0;

	for (P = 0; P < size; P++)
	{
		sum1 = sum1 + a[P * size + P];
	}

	for (P = size - 1; P >= 0; P--)
	{
		sum2 += a[P * size + (size - P - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
