#include <stdio.h>
#include "main.h"

/**
 * print_to_98-returns all natural numbers between n and 98,
 * following a new line.
 * @n:print from this id.
 */
void print_to_98(int n)
{
	int R, j;

	if (n <= 98)
	{
		for (R = n; R <= 98; R++)
		{
			if (R != 98)
				printf("%d, ", R);
			else if (R == 98)
				printf("%d\n", R);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
